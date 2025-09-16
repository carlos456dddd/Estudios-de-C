/// chatgpt
// #include <stdio.h>

// struct S { char c; int i; };   // padding → 8 B (x86-64)

// int main(void)
// {
//     struct S s[3] = { {'a', 1}, {'b', 2}, {'c', 3} };
//     struct S *p = s;

//     printf("sizeof(struct S) = %zu\n", sizeof(struct S));
//     for (int i = 0; i < 3; ++i)
//         printf("p+%d → %p  (s[i].i=%d)\n", i, (void *)(p + i), (p + i)->i);
//     return 0;
// }

/// me

#include <stdio.h>

// Declaración de variable global
// struct S
// {
//     int s;
//     int g;
// } v,d; // declaración de struct

// //Hasta donde veo es como declarar simplemente struct vacios plantillas que se puede rellenar desde fuera del main

// int main(void)
// {

//     printf("espacio de memoria asignado? : %p \n", v.g);
//     struct S v = {5,6};
//     printf("El siguiente valor es: %p \n", v);
//     struct S n= {8,9};
//     printf("El siguiente valor es: %p \n", n);

//     // struct S b = {9,4};//La unica diferencia que se me ocurre es que se declare global con anterioridad o que se reserve con antelación espacio de memoria
//     struct S l[4] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}}; // Declaración de un array donde cada valor es un struct
//     struct S *p = l;                                  // Primer elemento;
//     // printf("Vemaos que da el elemento %p, del segundo es %p", &l[0], p->g);
//     // printf("sizeof(struct S) = %zu\n", sizeof(struct S)); --> tamaño de 8 bit es de cada uno de los struct como tal es el tamaño de la suma de los dos enteros
//     // Luego para revisar como es en este caso los saltos
//     // Creo que al igual manera que en una cadena lo que se toma es struct s {int a;int b} es s.(first_value)

//     int *t = &l[1].g; // en el caso del segundo obtengo 00000000005FFE9C de la dirección guardada

//     printf("comprobación del primer valor del segundo struct[], %p \n", t);

//     //En el caso de querer agregar un +1 estamos agregando 4bytes al ser int, por esto al usar el t+1 obtenemos el primero valor del siguiente struct
//     //Como tal no existe t+1 como valor pero en el caso de agregar un valor en direccion del puntero estaremos llendo a la ubicación real que tiene el siguiente struct

//     for (int i; i < 4; i++)
//     {
//         // Según lo que entiendo vemamos lo siguiente
//         printf("Tendremos lo siguiente: %d, tendremos el valor del p: %p, tendremos a %d \n", i, (p + i), (p + i)->g);
//         // Hasta donde veo en el caso de los struct al llamar p->v al parecer ya ingresa directamente a la dirección para obtener el valor
//     }

//     return 0;
// }

struct ALFA
{
    int x;
    int y;
    int z;
};

void PasoDeReferencia(struct ALFA x)
{

    // En este caso no pasa como tal referencia para cambiar pero se pasa la estructura
    //  x.x = 9;
    //  x.y = 5;
    //  x.z = 6;
    // Supongo que en este caso no cambiara nada en el principa solo asignado basado en el element struct anterior

    printf("Supongamos que agregamos a x: %d, y:%d, z:%d \n", x.x + 1, x.y + 2, x.z + 3);
};

// Ahora para poder cambiar los valores necesitamos
void PasoDeReferencia_conDireccion_memoria(struct ALFA *f)
{
    // Se declara como puntero para obtener la dirección de memoria anterior
    //{00000000005FFEBC,..,..}
    printf("Obtenemos la dirección de memoria que tenga: %p \n", f);

    f->x = 1; // los modificadores son diferentes en lugar de realizar *(f.x) es f->x que esta en 00000000005FFEBC de la memoria
    f->y = 1;
    f->z = 1;

    // Ahora cambiamos los valores

} // Estamos pasando supuestamente en este caso la dirección de memoria del anterior

// Lo que quiero ver lo que sucede en funciones

void PruebaDudaEstructura_pasodearraydeestructuras(struct ALFA *g)
{
    printf("No estoy seguro de lo que esta obteniendo: %p\n", g);

    //Realizamos las modificaciones si es posible
    g[1].x = 15;


}

int main(void)
{

    struct ALFA b = {5, 1, 7};
    struct ALFA ff[2] = {{1,2,3},{4,5,6}};

    // PasoDeReferencia(b);
    // {00000000005FFEBC,...}
    int *h = &b.x;
    // Hasta donde veo lo que se pasa como referencia de ser el caso es la dirección de memoria del primer elemento del Struct valor real de su ubicación
    //00000000005FFE90 de manera regular entregará lo siguiente 
    //Si buscamos referencia o dar &b estariamos pasando la dirección del primer valor del struct 00000000005FFEBC
    printf("Dirección de memoria anterior: %p \n",ff);
    PasoDeReferencia_conDireccion_memoria(&b);

    // Existe modificación de la memoria de ser el caso por que se pasa la dirección de memoria y existe manipulación del valor de la dirección usada
    printf("En este caso los reales de ALFA b son x: %d, y:%d, z:%d \n", b.x, b.y, b.z);



    //-------------------------------------------------------------
    //Caso de array de estructuras 
    
    PruebaDudaEstructura_pasodearraydeestructuras(ff); //En este caso es un arra de struct por lo que es &ff[0];
    printf("Obtendremos el valor de ff[1].x = %d", ff[1].x);  
    
    //Ya lo tengo por eso la variación de la dirección de memoria al ser de esta forma -> es por el hecho que obviamente es un array primero que struct y en este caso como en cualquier array se le esta asignando el primer valor de un array &ff[0] como dirección de memoria predeterminada
}
