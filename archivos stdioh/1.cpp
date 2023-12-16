#include <stdio.h>

int main() {
    // Nombre del archivo
    const char *nombreArchivo = "mi_archivo.txt";
    // Intentar abrir el archivo en modo lectura ("r")
    FILE *archivo = fopen(nombreArchivo, "r");

    // Verificar si se pudo abrir el archivo
    if (archivo == NULL) {
        // Mostrar mensaje de error si el archivo no existe
        printf("Error: No se pudo abrir el archivo '%s'\n", nombreArchivo);
    } else {
        // El archivo se abrió correctamente, puedes realizar operaciones en el archivo aquí
        printf("El archivo '%s' se abrió correctamente.\n", nombreArchivo);

        // Recuerda cerrar el archivo después de usarlo
        fclose(archivo);
    }

}
