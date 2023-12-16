#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    //Generar un numero aleatorio sin cambiar la semilla
    printf("Numero aleatorio sin semilla: %d\n", rand());

    //Cambiar la semilla usando srand()
    unsigned int nuevaSemilla = (unsigned int)time(NULL);
    srand(nuevaSemilla);

    // Generar un número aleatorio después de cambiar la semilla
    printf("Numero aleatorio despues de cambiar la semilla: %d\n", rand());


}

