/* Escribir una funcion que devuelva multiples valores a traves del uso de
referencias, que solicite al usuario el numero de dias
y el tipo de habitacion en la que se hospedara en el hotel.
Calcular (valores a devolver) el precio por noche, el impuesto a pagar
y el precio total que el usuario debera cancelar
Toma en cuenta los precios por el tipo de habitacion.
-Sencilla 45.00
-Doble ejecutiva 70.00
-Suite presidencial 150.00

Finalmente mostrar el detalle de la cantidad de noches, el precio por noche,
el detalle del impuesto y el precio total a pagar por habitacion. */

#include <iostream>
#include "lib.hpp"
using namespace std;

int main()
{

    struct DatosHuesped huesped;
    pedirDatos(huesped);
    do
    {
        if (huesped.op != 1 && huesped.op != 2 && huesped.op != 3)
        {
            cout << "Ingrese una opcion valida \n";
        }
    } while (huesped.op != 1 && huesped.op != 2 && huesped.op != 3);

    if (huesped.op == 1)
    {
        cout << "Usted se hospedara en el hotel por: " << huesped.dias << endl
             << "El precio por noche sera de: "
             << "$" << huesped.habSencilla << endl
             << "El costo total por los dias que se hospedara sera de: "
             << "$" << huesped.totalCancelar << endl;
    }
    else if (huesped.op == 2)
    {
        cout << "Usted se hospedara en el hotel por: " << huesped.dias << endl
             << "El precio por noche sera de: "
             << "$" << huesped.habEjecutiva << endl
             << "El costo total por los dias que se hospedara sera de: "
             << "$" << huesped.totalCancelar << endl;
    }
    else if (huesped.op == 3)
    {
        cout << "Usted se hospedara en el hotel por: " << huesped.dias << endl
             << "El precio por noche sera de: "
             << "$" << huesped.habPresidencial << endl
             << "El costo total por los dias que se hospedara sera de: "
             << "$" << huesped.totalCancelar << endl;
    }

    return 0;
}