// Implementa una función que reciba un puntero y un tamaño, y sume todos los elementos.
// 👉 Pista: Mueve el puntero dentro del loop.

#include <stdio.h>

int suma_elementos(int *d, int t)
{

    int value;
    for (int i = 0; i < t; i++) {

        value = value + *(d+i);

    }

    return value;
}

int main(void)
{

    int l[6] = {1, 2, 3, 4, 5, 6};

    int ll = suma_elementos(l, 6);


    printf("Retornar resultao: %d \n", ll);
}