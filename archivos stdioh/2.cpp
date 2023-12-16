#include <stdio.h>

int main() {
    // Añadir líneas al archivo de texto usando fprintf()
    FILE *archivoSalida = fopen("ejemplo.txt", "a");

    if (archivoSalida == NULL) {
        printf("Error: No se pudo abrir el archivo para escribir.\n");
        return 1;
    }

    // Solicitar a la persona que añada líneas al archivo
    printf("Agrega líneas al archivo. (Presiona Enter en una línea vacía para finalizar):\n");

    char inputBuffer[100];
    while (fgets(inputBuffer, sizeof(inputBuffer), stdin) != NULL && inputBuffer[0] != '\n') {
        fprintf(archivoSalida, "%s", inputBuffer);
    }

    // Cerrar el archivo después de escribir
    fclose(archivoSalida);

    // Leer y mostrar solo las líneas nuevas del archivo
    FILE *archivoEntrada = fopen("ejemplo.txt", "r");

    if (archivoEntrada == NULL) {
        printf("Error: No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("Lineas nuevas del archivo:\n");

    char linea[100];
    while (fgets(linea, sizeof(linea), archivoEntrada) != NULL) {
        printf("%s", linea);
    }

    // Cerrar el archivo después de leer
    fclose(archivoEntrada);

    return 0;
}
