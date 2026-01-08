#include <iostream>
#include <vector>
using namespace std;

// elimina duplicados manteniendo el primer orden de aparición
vector<int> normalizar(vector<int> v) {
  vector<int> res;
  for (int i = 0; i < v.size(); i = i + 1) {
    int x = v[i];
    bool ya = false;
    for (int j = 0; j < res.size(); j = j + 1) {
      if (res[j] == x) { ya = true; break; }
    }
    if (!ya) res.push_back(x);
  }
  return res;
}

vector<int> unionSet(vector<int> a, vector<int> b) {
  vector<int> r = a;
  for (int i = 0; i < b.size(); i = i + 1) {
    int x = b[i];
    bool existe = false;
    for (int j = 0; j < r.size(); j = j + 1) if (r[j] == x) { existe = true; break; }
    if (!existe) r.push_back(x);
  }
  return r;
}

vector<int> interseccionSet(vector<int> a, vector<int> b) {
  vector<int> r;
  for (int i = 0; i < a.size(); i = i + 1) {
    int x = a[i];
    for (int j = 0; j < b.size(); j = j + 1) {
      if (x == b[j]) { // está en ambos
        bool ya = false;
        for (int k = 0; k < r.size(); k = k + 1) if (r[k] == x) { ya = true; break; }
        if (!ya) r.push_back(x);
        break;
      }
    }
  }
  return r;
}

vector<int> diferenciaSet(vector<int> a, vector<int> b) {
  vector<int> r;
  for (int i = 0; i < a.size(); i = i + 1) {
    int x = a[i];
    bool enb = false;
    for (int j = 0; j < b.size(); j = j + 1) if (x == b[j]) { enb = true; break; }
    if (!enb) r.push_back(x);
  }
  return r;
}

// prueba automática
bool pruebaConjuntos() {
  vector<int> A = {1,2,2,3};
  vector<int> B = {2,4};

  A = normalizar(A); // A = {1,2,3}

  vector<int> u = unionSet(A,B); // esperado {1,2,3,4}
  vector<int> e_u = {1,2,3,4};
  for (int i = 0; i < e_u.size(); i = i + 1) if (u[i] != e_u[i]) { cout << "Union FALLA\n"; return false; }

  vector<int> inter = interseccionSet(A,B); // esperado {2}
  if (inter.size() != 1 || inter[0] != 2) { cout << "Interseccion FALLA\n"; return false; }

  vector<int> diff = diferenciaSet(A,B); // esperado {1,3}
  if (diff.size() != 2 || diff[0] != 1 || diff[1] != 3) { cout << "Diferencia FALLA\n"; return false; }

  cout << "Prueba (Conjuntos): OK\n";
  return true;
}

int main_conjuntos() {
  return pruebaConjuntos() ? 0 : 1;
}
