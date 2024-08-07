#include <stdio.h>
#include <string.h>

#define MAX_NOMBRES 10
#define MAX_LONGITUD_NOMBRE 50

void pedirNombres(char nombres[MAX_NOMBRES][MAX_LONGITUD_NOMBRE]) {
    for (int i = 0; i < MAX_NOMBRES; i++) {
        printf("Ingrese el nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
    }
}

void ordenarNombres(char nombres[MAX_NOMBRES][MAX_LONGITUD_NOMBRE]) {
    for (int i = 0; i < MAX_NOMBRES - 1; i++) {
        for (int j = 0; j < MAX_NOMBRES - i - 1; j++) {
            if (strcmp(nombres[j], nombres[j + 1]) > 0) {
                char temp[MAX_LONGITUD_NOMBRE];
                strcpy(temp, nombres[j]);
                strcpy(nombres[j], nombres[j + 1]);
                strcpy(nombres[j + 1], temp);
            }
        }
    }
}

void mostrarNombres(char nombres[MAX_NOMBRES][MAX_LONGITUD_NOMBRE]) {
    printf("Nombres ordenados:\n");
    for (int i = 0; i < MAX_NOMBRES; i++) {
        printf("%d. %s\n", i + 1, nombres[i]);
    }
}

int main() {
    char nombres[MAX_NOMBRES][MAX_LONGITUD_NOMBRE];

    printf("Ingrese 10 nombres:\n");
    pedirNombres(nombres);

    ordenarNombres(nombres);

    mostrarNombres(nombres);

    return 0;
}
