// Header file for input output functions
#include <stdio.h>
#include "idiomas.h"

$$initDiccionario$

// void print() {
//     printf("%s\r\n", _$($IDIOMA));
//     printf("%s\r\n", _$($PESARCERO));
//     printf("%s\r\n", _$($CABECERA_IMPRESORA));
//     printf("%s\r\n", _$($PREG_BORRAR_2));
//     printf("%s\r\n", _$($PB));
//     // printf("%s\r\n", _$($REPETIDORCHINO));
//     printf("\r\n\r\n\r\n");
// }

void print2() {
    for(int i = 0; i < COUNT_DICCIONARIO; i++) {
        printf("ID %03d: %s\r\n", i, _$((uint16_t)i));
    }
    printf("\r\n\r\n\r\n");
}

int main() {
    idiomaSeleccionado = 0;
    printf("Español:\r\n");
    print2();
    // print();
    
    idiomaSeleccionado = 1;
    printf("Ingles:\r\n");
    // print();
        print2();

    
    idiomaSeleccionado = 2;
    printf("Portugues:\r\n");
    // print();
    print2();

    return 0;
}
