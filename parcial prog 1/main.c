#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct // ejercicio 1
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais pais, int recuperados);// ejercicio 1
int invertirCadena(char cadena, int tam);// ejercicio 2
int ordenarCaracteres(char cadena, int tam);// ejercicio 3

int main()
{
    printf("Hello world!\n");
    return 0;
}

void actualizarRecuperados(ePais pais, int recuperadosDelDia) // ejercicio 1
{
    int auxRecuperados;
    auxRecuperados += recuperadosDelDia;
    pais.recuperados = auxRecuperados;
}

int invertirCadena(char cadena, int tam) // ejercicio 2
{

}

int ordenarCaracteres(char cadena, int tam) // ejercicio 3
{

}
