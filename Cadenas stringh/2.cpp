#include <stdio.h>
#include <string.h>

int main() {
    // Definir una cadena de caracteres
    char cadena[100];

    // Solicitar al usuario que ingrese la cadena
    printf("Ingrese una cadena: ");
    scanf("%s", cadena);

    // Calcular la longitud de la cadena usando strlen()
    size_t longitud = strlen(cadena);

    // Mostrar la longitud de la cadena
    printf("La longitud de la cadena '%s' es: %zu\n", cadena, longitud);

    return 0;
}
