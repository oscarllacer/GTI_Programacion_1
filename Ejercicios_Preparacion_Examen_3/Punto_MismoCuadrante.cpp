#include <iostream>

/*Devuelve true si ambos puntos están en el mismo cuadrante (I, II, III o IV).
Si alguno está sobre un eje → devuelve false.*/

  bool mismoCuadrante(const Point& p) {
        if (x == 0 || y == 0 || p.x == 0 || p.y == 0)
            return false;

        if (x > 0 && y > 0 && p.x > 0 && p.y > 0) return true;
        if (x < 0 && y > 0 && p.x < 0 && p.y > 0) return true;
        if (x < 0 && y < 0 && p.x < 0 && p.y < 0) return true;
        if (x > 0 && y < 0 && p.x > 0 && p.y < 0) return true;

        return false;
    }