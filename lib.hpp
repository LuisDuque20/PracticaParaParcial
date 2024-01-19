#include <iostream>
#include <string>

struct DatosHuesped
{
    double habSencilla = 45.00,
           habEjecutiva = 75.00,
           habPresidencial = 150.00,
           totalCancelar = 0;
    int dias, op;
};

void pedirDatos(DatosHuesped &x);
double calcularPrecio(DatosHuesped);
