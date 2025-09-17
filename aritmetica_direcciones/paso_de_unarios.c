#include <stdio.h>

// int *x, func(int *g) {

// };

int func(int *p, int *g)
{

    while (*p != *g)
    {

        printf("Recorrer el array: %d\n", *p);
        // (*p)++; //En este caso la dirección a la que apunta sigue igual, en este caso solo cambia el valor al que apunta
        *p++; //En este caso la dirección a la que apunta sigue igual, en este caso solo cambia el valor al que apunta
        //Van de derecha a izquierda los operadores unarios por eso es necesario llamar mediante () para que sea así
        
    }

    return *p;
}

int main(void)
{

    // int g= 5;

    // int *j = &g;

    // printf("LLamamos al valor de %d,: %d", *j+1, g );

    int t[5] = {4, 5, 6, 7, 8};
    func(t, &t[5]);
}
