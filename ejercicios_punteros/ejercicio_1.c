#include <stdio.h>

// Declara un array de 5 enteros y recórrelo usando punteros en lugar de índices.
// 👉 Pista: *(p+i) es equivalente a array[i].

int main (void) {


    int l[5] = {9,8,7,6,5};

    int *p = l;

    // for (int i; i<5; i++) {

    //     //Recorred con indices
    //     printf("Recorrido:%d\n", l[i]);


    // };

    // while(p != &l[5]) {
    //     printf("Tenmos que : %p\n", p);
    //     p++;
    // }

    for (int i = 0 ; i<5; i++ ) {
        *(p+i);
        printf("La dirección de memoria %p: le corresponde el número %d\n", p+i, *(p+i));
    }


    







}