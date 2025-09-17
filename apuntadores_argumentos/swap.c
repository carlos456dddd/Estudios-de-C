#include <stdio.h>

// Funcion swap que intercambie directamente los valores de g-h

int swap(int *t, int *y)
{

    int m = *t;
    *t = *y;
    *y = m; //Esto podría manejar dos estados de respuesta en cas ode estar usando C
    return 1; //EOF fin del archivo, 1 = todo bien y el 0 = no se considera un número

}

int main(void)
{

    // Como hacer swap

    int f = 5;

    int *h = &f;

    *h = 6;

    // La gran moraleja es que la dirección de memoria es un valor de cierta forma que persigue y que puede ser cambiado pero ayuda al manejo de los datos
    printf("cambiaría? h: %p, tenemos del f: %p, y tenemos su valor de f:%d\n", h, &f, f);

    int vector[3] = {1, 2, 3};

    int *j = vector;

    *j = 6;

    printf("El valor nuevo de vector[0]: %d", vector[0]);

    int g = 9;
    int hh = 46;

    printf("Antes : g =  %d; h = %d ", g, hh);

    swap(&g, &hh);

    printf("Antes : g =  %d; h = %d ", g, hh);
}