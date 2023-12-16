#include <stdio.h>
#include <string.h>

int main() {
    // Definir dos cadenas de caracteres
    char cadena1[100];
    char cadena2[100];

    // Solicitar al usuario que ingrese el contenido de la primera cadena
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);

    // Solicitar al usuario que ingrese el contenido de la segunda cadena
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    // Comparar las cadenas usando strcmp()
    int resultado = strcmp(cadena1, cadena2);

    // Mostrar el resultado de la comparación
    if (resultado == 0) {
        printf("Las cadenas son iguales: %s y %s\n", cadena1, cadena2);
    } else {
        printf("Las cadenas son diferentes: %s y %s\n", cadena1, cadena2);
    }

    return 0;
}
