#include <stdio.h>

int main() {
    // Añadir líneas al archivo de texto usando fprintf()
    FILE *archivoSalida = fopen("ejemplo.txt", "a");

    if (archivoSalida == NULL) {
        printf("Error: No se pudo abrir el archivo para escribir.\n");
        return 1;
    }

    // Solicitar a la persona que añada líneas al archivo
    printf("Agrega lineas al archivo. (Presiona Enter en una linea vacia para finalizar:\n");

    char inputBuffer[100];
    while (fgets(inputBuffer, sizeof(inputBuffer), stdin) != NULL && inputBuffer[0] != '\n') {
        fprintf(archivoSalida, "%s", inputBuffer);
    }

    // Cerrar el archivo después de escribir
    fclose(archivoSalida);

    // Leer el contenido actualizado del archivo usando fscanf()
    FILE *archivoEntrada = fopen("ejemplo.txt", "r");

    if (archivoEntrada == NULL) {
        printf("Error: No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("Contenido del archivo:\n");

    char linea[100];
    while (fscanf(archivoEntrada, "%99[^\n]\n", linea) == 1) {
        printf("%s\n", linea);
    }

    // Cerrar el archivo después de leer
    fclose(archivoEntrada);

    return 0;
}
