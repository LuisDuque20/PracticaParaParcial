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

int main(){
    struct DatosHuesped huesped;
    pedirDatos(huesped);
    
    return 0;
}