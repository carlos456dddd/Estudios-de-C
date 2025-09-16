// //de la ia #include <stdio.h>
// #include <stddef.h>   // ptrdiff_t

// int main(void)
// {
//     double arr[10];
//     double *a = &arr[2];
//     double *b = &arr[7];
//     ptrdiff_t dist = b - a;

//     printf("distancia = %td elementos\n", dist);   // 5
//     printf("distancia = %td bytes\n",   dist * sizeof(double));
//     return 0;
// }
//-----------------------------------------------------------------------------------

// me

#include <stdio.h>

int main(void)
{
    int p[4] = {5, 6, 8, 3};

    int *l = p;
    int *ultimo = p + 3;

    ptrdiff_t dist = ultimo - l;

    printf("la distancia posciones: %d\n", dist);
    printf("La distancia de bytes: %td\n", dist*sizeof(int)); 

    return 0;
}
