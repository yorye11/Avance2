#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

// estructura
struct datos
{
    int NumArt = 0, ADL = 0;
    float Precio = 0, Impuesto = 0, total = 0;
    string NomVid, clasif, consola, genero;
    
    string caracteristicas;
    string descripcion;

};

int NumArt = 0, ADL = 0;
float Precio = 0, Impuesto = 0, total = 0;
string NomVid, clasif, consola,genero;
string caracteristicas;
string descripcion;

int main()
{
    datos altas[3];
    int opcion;
    do
    {
        printf("\t ***MENU DE OPCIONES*** \n");
        printf("1.- Agregar Articulo \n");
        printf("2.- Modificar Articulo \n");
        printf("3- Eliminar Articulo \n");
        printf("4.- Lista de Articulos Vigentes \n");
        printf("5.- Limpiar Pantalla \n");
        printf("6.- Salir\n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                printf("ingrese el numero de Articulo \n");
                cin.ignore();
                scanf_s("%d", &altas[i].NumArt);
                printf("ingrese el nombre del videojuego \n");
                cin.ignore();
                getline(cin, altas[i].NomVid);
                printf("ingrese el Año de lanzamiento  \n");
                scanf_s("%d", &altas[i].ADL);
                printf("ingrese el genero \n");
                cin.ignore();
                getline(cin, altas[i].genero);
                printf("ingrese la clasificacion \n");
                cin.ignore();
                getline(cin, altas[i].clasif);
                printf("ingrese la consola a la que pertenece \n");
                cin.ignore();
                getline(cin, altas[i].consola);
                printf("ingrese las caracteristicas del videojuego \n");
                cin.ignore();
                getline(cin, altas[i].caracteristicas);
                printf("ingrese una breve descripcion del videojuego \n");
                cin.ignore();
                getline(cin, altas[i].descripcion);
                printf("ingrese el precio unitario \n");
                scanf_s("%f", &altas[i].Precio);
                printf("ingrese el impuesto \n");
                scanf_s("%f", &altas[i].Impuesto);
                printf("ingrese el total \n");
                scanf_s("%f", &altas[i].total);

            }

            break;
        case 2:
            break;

        case 3:
            break;

        case 4:
            //pendiente los strings ( c_str)
            for (int i = 0; i < 3; i++)
            {
                printf("Numero de Articulo: %d \n", altas[i].NumArt);
                printf("Nombre del videojuego: %s \n", altas[i].NomVid.c_str());
                printf("Año de lanzamiento: %d \n", altas[i].ADL);
                printf(" Genero: %s \n", altas[i].genero.c_str());
                printf("  Clasificacion: %s  \n", altas[i].clasif.c_str());
                printf("  Consola: %s \n", altas[i].consola.c_str());
                printf("Caracteristicas: %s \n", altas[i].caracteristicas.c_str());
                printf("Descripción: %s \n", altas[i].descripcion.c_str());
                printf("Precio unitario %f \n", altas[i].Precio);
                printf("Impuesto %f \n", altas[i].Impuesto);
                printf("Total %f \n", altas[i].total);
            }

            break;
        case 5:
            system("cls");
            break;
        case 6:
            exit(1);
            break;
        default:
            break;
        }
    } while (opcion != 6);

}