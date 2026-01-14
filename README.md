# Idioma-comp

## make build
```bash


gcc main.c idiomas.c
In file included from main.c:3:
idiomas.h:9:42: warning: useless storage class specifier in empty declaration
    9 | typedef enum {$_ESPANOL_$ = 0,$_INGLES_$,$_PORTUGUES_$};
      |                                          ^~~~~~~~~~~~~
idiomas.h:15:1867: warning: useless storage class specifier in empty declaration
   15 | ECETA,$SIGUIENTE,$REGISTRO_ABREVIADO,$SI,$UnidadKg,$UnidadLb,$PAUSA,$TARA,$RESET,$ADVERTENCIA,$ASISTENTE_REMOTO,$ACTIVADO,$PENDRIVE_DESACTIVADO,$PESADA,$GUARDADA,$PB,COUNT_DICCIONARIO};
      |                                                                                                                                                                       ^~~~~~~~~~~~~~~~~

In file included from idiomas.c:1:
idiomas.h:9:42: warning: useless storage class specifier in empty declaration
    9 | typedef enum {$_ESPANOL_$ = 0,$_INGLES_$,$_PORTUGUES_$};
      |                                          ^~~~~~~~~~~~~
idiomas.h:15:1867: warning: useless storage class specifier in empty declaration
   15 | ECETA,$SIGUIENTE,$REGISTRO_ABREVIADO,$SI,$UnidadKg,$UnidadLb,$PAUSA,$TARA,$RESET,$ADVERTENCIA,$ASISTENTE_REMOTO,$ACTIVADO,$PENDRIVE_DESACTIVADO,$PESADA,$GUARDADA,$PB,COUNT_DICCIONARIO};
      |                                                                                                                                                                       ^~~~~~~~~~~~~~~~~

idiomas.c: In function ‘stringDiccionarioIdioma’:
idiomas.c:6:108: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    6 | char* stringDiccionarioIdioma(uint8_t idioma, uint16_t offset) { switch(idioma) { case $_ESPANOL_$: return &diccionario_Espanol[diccionario_idiomas[offset].offsetEsp]; break; case $_INGLES_$: return &diccionario_Ingles[diccionario_idiomas[offset].offsetIng]; break; case $_PORTUGUES_$: return &diccionario_Portugues[diccionario_idiomas[offset].offsetPor]; break; } return 0; }
      |                                                                                                            ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
idiomas.c:6:200: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    6 | t8_t idioma, uint16_t offset) { switch(idioma) { case $_ESPANOL_$: return &diccionario_Espanol[diccionario_idiomas[offset].offsetEsp]; break; case $_INGLES_$: return &diccionario_Ingles[diccionario_idiomas[offset].offsetIng]; break; case $_PORTUGUES_$: return &diccionario_Portugues[diccionario_idiomas[offset].offsetPor]; break; } return 0; }
      |                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

idiomas.c:6:294: warning: return discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    6 | [diccionario_idiomas[offset].offsetEsp]; break; case $_INGLES_$: return &diccionario_Ingles[diccionario_idiomas[offset].offsetIng]; break; case $_PORTUGUES_$: return &diccionario_Portugues[diccionario_idiomas[offset].offsetPor]; break; } return 0; }
      |                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

```


## make run 
```bash
Español:
IDIOMA:
PESAR CERO
CABECERA IMPRESOR
QUIERE BORRAR
PROT_PB



Ingles:
LANGUAJE:
WEIGHING ZERO
PRINT HEADER
WANT TO DELETE
PROT_PB



Portugues:
IDIOMA:
PESAR ZERO
CABECALHO IMPRE
QUER APAGAR
PROT_PB

```
