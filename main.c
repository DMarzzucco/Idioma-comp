// Header file for input output functions
#include <stdio.h>
#include "idiomas.h"

$$initDiccionario$

void print() {
    printf("%s\r\n", _$($IDIOMA));
    printf("%s\r\n", _$($PESARCERO));
    printf("%s\r\n", _$($CABECERA_IMPRESORA));
    printf("%s\r\n", _$($PREG_BORRAR_2));
    printf("%s\r\n", _$($PB));
    printf("\r\n\r\n\r\n");
}

int main() {
    idiomaSeleccionado = 0;
    printf("Español:\r\n");
    print();
    
    idiomaSeleccionado = 1;
    printf("Ingles:\r\n");
    print();
    
    idiomaSeleccionado = 2;
    printf("Portugues:\r\n");
    print();
    return 0;
}
