#include <iostream>
#include <vector>
using namespace std;

/*EJERCICIO EXAMEN 2025; EJERCICIO 50 LIBRETA NARANJA

Escribe un trozo de código para anyadir a un objeto agenda la 
cita: fecha "123456789", 
hora = 1015,
motivo = "examen" (STRING)


APARTADO A:trozo de código para añadir la cita                */

// Añadir una cita a la agenda
bool correcto;

correcto = agenda.nuevaCita(123456789, 1015, "examen");

if (correcto == true)
    std::cout << "Cita añadida";
else
    std::cout << "Ya existe una cita en esa fecha y hora";

//----------------------------------------------------------
//----------------------------------------------------------

/* APARTADO B: Implementa la clase Agenda según el anterior diseño 
teniendo en cuenta que no puede haber dos citas para la misma fecha y hora*/


struct Appointment {
    long long date;
    int hour;
    char reason[40];
};

class Agenda {
private:
    Appointment appts[100];
    int n;

public:
    Agenda() { n = 0; }

    bool addAppointment(long long date, int hour, const char* reason) {
        for (int i = 0; i < n; i++) {
            if (appts[i].date == date && appts[i].hour == hour)
                return false;
        }

        appts[n].date = date;
        appts[n].hour = hour;

        int i = 0;
        for (int i = 0; i < 39 && reason[i] != '\0'; i++)
        appts[n].reason[i] = reason[i];

        appts[n].reason[i] = '\0';

        n++;
        return true;
    }
};
