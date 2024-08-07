#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    char nombre[25];
    char telefono[25];
} Agenda;

void ingresar(Agenda *contacto) {
    printf("Ingrese el nombre: ");
    scanf("%s",contacto->nombre);
    printf("Ingrese el telefono: ");
    scanf("%s",contacto->telefono);
    printf("Ingrese el numero de telefono: ");
    scanf("%d",&contacto->numero);
}

void mostrar(Agenda *contacto) {
    printf("Nombre: %s\n", contacto->nombre);
    printf("Telefono: %s\n", contacto->telefono);
    printf("Numero de telefono: %d \n",contacto->numero);
}

int main(){
    int cantidad;
    printf("Ingrese la cantidad de datos que desea ingresar: ");
    scanf("%d", &cantidad);

    Agenda *agenda=(Agenda *)malloc(cantidad * sizeof(Agenda));
    if(agenda==NULL){
        printf("Error al asignar memoria \n");
        return 1;
    }

    for(int i=0; i<cantidad; i++){
        printf("Contacto %d \n",i+1);
        ingresar(&agenda[i]);
    }

    free(agenda);

    return 0;
}
