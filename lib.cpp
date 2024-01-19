#include <iostream>
#include "lib.hpp"
using namespace std;

void pedirDatos(DatosHuesped &x)
{
    cout << "Cuantos dias estara en el hotel? ";
    cin >> x.dias;
    cout << "En que tipo de habitacion le gusataria hospedarse? \n"
         << "1 --> Habitacion sencilla: $45.00 por noche \n"
         << "2 --> Habitacion ejecutiva: $70.00 por noche \n"
         << "3 --Suite residencial: $150.00 \n";
    cin >> x.op;
    if (x.op == 1)
    {
        cout << "Usted ha seleccionado la habitacion sencilla";
    }
    else if (x.op == 2)
    {
        cout << "Usted ha seleccionado la habitacion ejecutiva";
    }
    else if (x.op == 3)
    {
        cout << "Usted ha seleccionado la suite presidencial";
    }
}
