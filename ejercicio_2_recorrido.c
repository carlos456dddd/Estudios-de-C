#include <stdio.h>


int main(void) {

    char l[6] = {'c','a','r','l','o','s'};

    char *p = l; // &l[0]; 
    char *final = l + 6;
    // printf("veremos que la dirección es: %p ", &l[0]);

    // printf("en este caso la dirección del final es : %c", *final);

    while (p < final) {

        printf("Mostrar los valores de %c, nuestras direcciones de memoria es :%p\n", *p, p);
        p++;

    };

    return 0;




}