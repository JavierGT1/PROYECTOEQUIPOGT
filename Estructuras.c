#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nombre[50];
    char f_nacimiento[50];
    char origen[50];
}Discografia;

typedef struct 
{
    char cd[50];
    char albun[50];
    char edicion[20];
}D_cancion;

int main(){
    int desicio;
    Discografia lista1[100]; 
    D_cancion lista2[100];
    int autor_desicion, cacnion_desicion;
    do
    {
        printf("\n |---------------------------|\n");
        printf(" |   Que va a realizar       |\n");
        printf(" |  1° Datos del autor       |\n");
        printf(" |  2° Datos de la cancio    |\n");
        printf(" |  3° Mostrar autores       |\n");
        printf(" |  4° Mostrar canciones     |\n");
        printf(" |  5° Salir                 |\n");
        printf(" |---------------------------|\n");
        scanf("%d", & desicio);
        if (desicio == 1)
        {
            printf("Cuantos autores ingresara? ");
            scanf("%d", & autor_desicion);
            getchar(); 
            for (int i = 0; i < autor_desicion; i++)
            {
                printf("Ingrese el nombre del autor: ");
                fgets(lista1[i].nombre, 50, stdin);
                lista1[i].nombre[strcspn(lista1[i].nombre, "\n")] = 0; 
                printf("Ingrese la fecha de nacimiento: ");
                fgets(lista1[i].f_nacimiento, 50, stdin);
                lista1[i].f_nacimiento[strcspn(lista1[i].f_nacimiento, "\n")] =0;
                printf("Ingrese el orign del autor: ");
                fgets(lista1[i].origen, 50, stdin);
                lista1[i].origen[strcspn(lista1[i].origen, "\n")]=0;
            }
        } else if (desicio == 2)
        {
            printf("Cuantos datos de la cancion quiere ingresar? ");
            scanf("%d", & cacnion_desicion);
            getchar();
            for (int i = 0; i < cacnion_desicion; i++)
            {
                printf("Ingrese el CD de la cancion: ");
                fgets(lista2[i].cd, 50, stdin);
                lista2[i].cd[strcspn(lista2[i].cd, "\n")] =0; 

                printf("Ingrese el Albun de la cancion: ");
                fgets(lista2[i].albun, 50, stdin);
                lista2[i].albun[strcspn(lista2[i].albun, "\n")] =0; 

                printf("Ingrese la edicion la cancion: ");
                fgets(lista2[i].edicion, 20, stdin);
                lista2[i].edicion[strcspn(lista2[i].edicion, "\n")] =0; 
            }
        }else if (desicio == 3)
        {
            for (int i = 0; i < autor_desicion; i++) {
                printf("Nombre: %s\n", lista1[i].nombre);
                printf("Fecha de naicmiento: %s\n", lista1[i].f_nacimiento);
                printf("Orign del autor: %s\n", lista1[i].origen);
            }
        }else if (desicio == 4)
        {
            for (int i = 0; i < cacnion_desicion; i++) {
                printf("-------------------------------------------\n");
                printf("CD : %s\n", lista2[i].cd);
                printf("Albun: %s\n", lista2[i].albun);
                printf("Edicion: %s\n", lista2[i].edicion);
                printf("-------------------------------------------");
            }
        }else if (desicio == 5)
        {
            break;
        }
    } while (1);
}