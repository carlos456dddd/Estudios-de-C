#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*Primer ejemplo de uso de malloc*/
    // int *p;
    // p = (int *)malloc(10 * sizeof(int));

    // printf("Muestra que : %p\n", p);

    // for (int i = 0; i < 10; i++)
    // {
    //     p[i] = i; //  == *(p+i)
    //     printf("Se asigna el número: %d\n", *(p + i));
    // };

    // free(p);

    /*Segúndo ejemplo con scan*/
    // int d;
    // printf("Necesito la variable:");
    // scanf("%d", &d);

    // printf("\nVariable: %d\n", d);    //No parecene nada del otro mundo solo inicializar la variable antes para recibir referencia
    // int *k;
    // //Reservar memoria

    // k = (int *)malloc(d*sizeof(int));

    // for (int i; i<d; i++ ) {
    //     k[i] = i;
    //     printf("Muestra de entrado los datos de direcciones de memoria: %d\n", k[i]);
    // }

    // free(k);

    /* .-calloc en diferencia es que entrega 00000000, aparte que se inicializa en (cantidad de elementos, cantidad de bytes) */

    // int *j = (int*)calloc(5, sizeof(int));

    // for (int i; i < 5; i++ ) {

    //     printf("Me llega a la punta: %p\n", j+i); //Se mostraran 0000000 -> a comparación de lo reservado con malloc
    // }

    // free(j);

    int *d = (int *)calloc(10, sizeof(int));

    for (int i; i < 10; i++)
    {
        d[i] = i;
        printf("Valores de direcciones de memoria: %d\n", *(d + i));
    };

    int p;

    printf("Se designara de forma inicial:");
    scanf("%d", &p);

    // realloc
    // printf("Dirección inicial de memoria: %d\n", *(d+9));
    d = (int *)realloc(d, (p+10) * sizeof(int));

    for (int g = 0; g < (p+11); g++)
    {

        printf("Los nuevos datos: %d\n", *(d+g));
    }
    printf("Esta llegando acá");
    free(d);

    return 0;
}