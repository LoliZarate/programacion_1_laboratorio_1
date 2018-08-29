#include <stdio.h>
#include <stdlib.h>

int suma(int, int); //prototipo declaracion
int main()
{
    int nro1, nro2, result;
    printf("Ingrese 1er operando: ");
    scanf("%d", &nro1);
    printf("\n Ingrese 2do operando: ");
    scanf("%d", &nro2);
    result=suma(nro1, nro2);//llamada
    system("cls");
    printf("Resultado: %d", result);
    return 0;
}//no da error ya que la firma esta al principio del algoritmo

int suma(int op1, int op2)
{
    int resultado;
    resultado= op1+op2;
    return resultado;
}
