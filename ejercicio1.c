#include <stdio.h>

int main(void)
{
    int arr[5] = {11, 23, 32, 15, 21};
    int *p = arr; // Entonces esta entregando el primer elemento de memoria o mejor dicho la dirección &arr[0] es igual
    int *l = &arr[2];

    printf("mucha curiosiodad de la dirección de memoria, %d,  %d ", l, p);
    ptrdiff_t d = l - p; // la dirección de memoria es 6291120 y si quiero concretamente el valor de esa dirección es 11 al ser del arr[0]
    printf("resultado de resta de punteros con la dirección de memoria de l - p: %d", d);
}
