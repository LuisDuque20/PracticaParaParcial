#include <iostream>
#include "lib.hpp"
using namespace std;

void pedirDatos(DatosHuesped &x)
{
    cout << "Cuantos dias estara en el hotel? ";
    cin >> x.dias;
    do
    {
        cout << "En que tipo de habitacion le gusataria hospedarse? \n"
             << "1 --> Habitacion sencilla: $45.00 por noche \n"
             << "2 --> Habitacion ejecutiva: $70.00 por noche \n"
             << "3 --Suite residencial: $150.00 \n";
        cin >> x.op;
        if (x.op != 1 && x.op != 2 && x.op != 3)
        {
            cout << "Ingrese una opcion valida \n";
        }
    } while (x.op != 1 && x.op != 2 && x.op != 3);

    if (x.op == 1)
    {
        cout << "Usted ha seleccionado la habitacion sencilla \n";
        x.totalCancelar = (x.habSencilla * x.dias) + ((x.habSencilla * x.dias) * 0.18);
    }
    else if (x.op == 2)
    {
        cout << "Usted ha seleccionado la habitacion ejecutiva \n";
        x.totalCancelar = (x.habEjecutiva * x.dias) + ((x.habEjecutiva * x.dias) * 0.18);
    }
    else if (x.op == 3)
    {
        cout << "Usted ha seleccionado la suite presidencial \n";
        x.totalCancelar = (x.habPresidencial * x.dias) + ((x.habPresidencial * x.dias) * 0.18);
    }
}
