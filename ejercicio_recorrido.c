#include <stdio.h>

int main(void)
{
    int i[5] = {1,2,3,4,5};
    int *p = i;

    for (int g; g < 5; g++) {
       printf("En iteración: %d , tenemos la lectura de direcciones de memoria:%p, tenemos los valores: %d",g, (i+g), *(i+g)); 
    };

}