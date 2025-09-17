// //Creo que se refiere a la diferencia de bits?
// Haz un casting de un int* a char* y muestra los bytes en memoria.
// 👉 Pista: sizeof(int) ≠ sizeof(char).

#include <stdio.h>



int main(void) {

    int l = 4;
    int gg = 6;
    char oo = '5';
    int *p = &l;    //En este caso tenemos que :
    int *jj = &gg;
    char *pi = &oo;
    


    // *p = (int)*pi; //En este caso según entiendo el "casting es el cambio de tipos" en este caso tendre los cambios de bits

    printf("Que es cast?, %p, %p, %p, pi:%p, jj:%p", sizeof(int), &l, p, pi, jj); //Bueno existe una diferencia de bits supongo
    //Tengo en registro Que es cast?, 0000000000000004, 00000000005FFEC4, 00000000005FFEC4
    //Se que en caso de los enteros es 0000000000000004 , char es 0000000000000001
    //En caos de lo qeu vimos tenemos 0000000000000004, 00000000005FFEBC, 00000000005FFEBC, pi:00000000005FFEBB
    //no entiendo como se rellena la memoría osea la dirección que obtiene el puntero es 
    //Creo que lo entendí mas o menos creo que dependiendo el tamaño de bites que ocupe será la entrada o uso del buffer por así decirlo en caso de ser un bite lo que muestra en la sección de putnero será donde esta empezando en memoria en que dirección -> memoria para int (donde empieza) -> lo mismo ...->..
    //veo que al intentar usar a   char *pi = &oo;


}

