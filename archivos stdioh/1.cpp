#include <stdio.h>
#include <string.h>

int main() {
    // Nombre del archivo ingresado por el usuario (sin extensión)
    char nombreArchivo[100];

    // Solicitar al usuario que ingrese el nombre del archivo sin extensión
    printf("Ingrese el nombre del archivo (sin extension): ");
    scanf("%s", nombreArchivo);

    // Concatenar la extensión ".txt" al nombre del archivo
    char nombreCompleto[100];
    sprintf(nombreCompleto, "%s.txt", nombreArchivo);

    // Intentar abrir el archivo en modo lectura ("r")
    FILE *archivo = fopen(nombreCompleto, "r");

    // Verificar si se pudo abrir el archivo
    if (archivo == NULL) {
        // Mostrar mensaje de error si el archivo no existe
        printf("Error: No se pudo abrir el archivo '%s'\n", nombreCompleto);
    } else {
        // El archivo se abrió correctamente, puedes realizar operaciones en el archivo aquí
        printf("El archivo '%s' se abrió correctamente.\n", nombreCompleto);

        // Leer y mostrar el contenido del archivo
        char caracter;
        printf("Contenido del archivo:\n");
        while ((caracter = fgetc(archivo)) != EOF) {
            putchar(caracter);
        }

        // Recuerda cerrar el archivo después de usarlo
        fclose(archivo);
    }

    return 0;
}
