#include <iostream>
#include <vector>
using namespace std;

// derivada: si p = [a0,a1,a2,...,an] devuelve [a1, 2*a2, 3*a3, ..., n*an]
vector<double> derivar(vector<double> p) {
  if (p.size() <= 1) return vector<double>(); // derivada de constante = 0 (vector vacío -> grado -inf)
  vector<double> r(p.size()-1, 0.0);
  for (int i = 1; i < p.size(); i = i + 1) {
    r[i-1] = p[i] * i;
  }
  return r;
}

// evaluar con Horner (forma eficiente)
// p en orden ascendente: result = a_n; for k=n-1..0: result = result*x + a_k
double evaluar(const vector<double>& p, double x) {
  int n = p.size() - 1;
  if (n < 0) return 0.0;
  double res = p[n];
  for (int k = n - 1; k >= 0; k = k - 1) {
    res = res * x + p[k];
  }
  return res;
}

// multiplicar: convulución simple
vector<double> multiplicar(const vector<double>& a, const vector<double>& b) {
  int n = a.size(), m = b.size();
  if (n == 0 || m == 0) return vector<double>();
  vector<double> r(n + m - 1, 0.0);
  for (int i = 0; i < n; i = i + 1) {
    for (int j = 0; j < m; j = j + 1) {
      r[i + j] = r[i + j] + a[i] * b[j];
    }
  }
  return r;
}

// división sintética por (x - a).
// Para hacerla claramente: convertimos coeficientes a orden descendente, aplicamos sintética,
// luego convertimos el cociente a orden ascendente.
// p: ascendente [a0,a1,...,an]
// devuelve (quotient ascendente, remainder)
pair<vector<double>, double> dividirPorXmenosA(const vector<double>& p, double a) {
  int n = p.size() - 1;
  if (n < 0) return make_pair(vector<double>(), 0.0);

  // convertir a orden descendente:
  vector<double> desc(n + 1);
  for (int i = 0; i <= n; i = i + 1) desc[i] = p[n - i];

  // sintética en orden descendente:
  vector<double> b(n + 1, 0.0);
  b[0] = desc[0];
  for (int i = 1; i <= n; i = i + 1) {
    b[i] = desc[i] + a * b[i-1];
  }

  // cociente en descendente es b[0..n-1], resto b[n]
  vector<double> qdesc;
  if (n >= 1) {
    qdesc.resize(n);
    for (int i = 0; i < n; i = i + 1) qdesc[i] = b[i];
  }

  // convertir cociente a ascendente:
  vector<double> qasc;
  if (qdesc.size() > 0) {
    qasc.resize(qdesc.size());
    int qn = qdesc.size();
    for (int i = 0; i < qn; i = i + 1) qasc[i] = qdesc[qn - 1 - i];
  }

  double resto = b[n];
  return make_pair(qasc, resto);
}

// pruebas automáticas
bool pruebaPolinomios() {
  // Polinomio P(x) = x^3 - 6x^2 + 11x - 6  -> asc: [-6,11,-6,1]
  vector<double> P = {-6.0, 11.0, -6.0, 1.0};

  // 1) evaluar en x=1  -> P(1)=0
  double v1 = evaluar(P, 1.0);
  if (v1 != 0.0) { cout << "FALLA evaluar\n"; return false; }

  // 2) dividir por (x-1) -> cociente x^2 -5x + 6 -> asc: [6, -5, 1], resto 0
  pair<vector<double>, double> div = dividirPorXmenosA(P, 1.0);
  vector<double> esperadoQ = {6.0, -5.0, 1.0};
  if (div.second != 0.0) { cout << "FALLA division resto\n"; return false; }
  vector<double> q = div.first;
  if (q.size() != esperadoQ.size()) { cout << "FALLA division tamaño\n"; return false; }
  for (int i = 0; i < q.size(); i = i + 1) if (abs(q[i] - esperadoQ[i]) > 1e-9) { cout << "FALLA division coef " << i << "\n"; return false; }

  // 3) derivada de P -> 3x^2 -12x +11 -> asc: [11, -12, 3]
  vector<double> d = derivar(P);
  vector<double> esperadoD = {11.0, -12.0, 3.0};
  if (d.size() != esperadoD.size()) { cout << "FALLA derivada tamaño\n"; return false; }
  for (int i = 0; i < d.size(); i = i + 1) if (abs(d[i]-esperadoD[i]) > 1e-9) { cout << "FALLA derivada coef\n"; return false; }

  // 4) multiplicar (x-1)*(x^2 -5x +6) -> debe reconstruir P
  vector<double> M1 = { -1.0, 1.0 }; // x-1 => asc [-1,1]
  vector<double> Q = multiplicar(M1, esperadoQ);
  // Q debe ser igual a P
  if (Q.size() != P.size()) { cout << "FALLA multiplicar tamaño\n"; return false; }
  for (int i = 0; i < P.size(); i = i + 1) if (abs(Q[i] - P[i]) > 1e-9) { cout << "FALLA multiplicar coef " << i << "\n"; return false; }

  cout << "Prueba (Polinomios): OK\n";
  return true;
}

int main_polinomios() {
  return pruebaPolinomios() ? 0 : 1;
}
