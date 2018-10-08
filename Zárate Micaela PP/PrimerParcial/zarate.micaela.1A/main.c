#include <stdio.h>
#include <stdlib.h>
#define CANT

typedef struct
{
    int idJuego;
    char descripcion [51];
    char importe;
    char isEmpty;

}eJuegos;

typedef struct

{
    int idClientes;
    char apellido [51];
    char nombre [51];
    char sexo;
    char domicilio [51];
    char isEmpty;

}eClientes;

typedef struct

{
    int idAlquileres;
    int idJuego;
    int idCliente;
    int fecha;
    char isEmpty;

}eAlquileres;

void inicializarJuegos(eJuegos x[], int CANT);
int buscarLibre(eJuegos x[], int CANT);
void buscarJuegos(eJuegos x[], int CANT);
void aniadirJuegos(eJuegos x[], int CANT);
void mostrarJuegos(eJuegos x[], int CANT);




