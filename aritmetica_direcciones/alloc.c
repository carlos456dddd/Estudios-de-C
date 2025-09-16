// #include <stdio.h>

// #define ALLOC 3000 // Tamaño de espacio * o eso entiendo

// // El alloc tiene un valor en direccion de memoria (....)
// static char mantis[ALLOC]; // Al rellenar sería sumar (direccion del array + ALLOC)
// // static char k[1];
// static char *alloc = &mantis[0]; //&mantis[0]

// // No sabía que así se escribia en una función puntero
// char *alloc_Control(int n)
// {
//     if (mantis + ALLOC - alloc >= n)
//     {
//         printf("La operacion de (condicional), %p\n", mantis + ALLOC - alloc);
//         printf("La operacion de (condicional),tengo a alloc:%p, ALLOC:%p, mantis:%p\n", alloc, ALLOC, mantis);

//         printf("La operación será alloc += n valor de alloc %p, valor de n %p\n", alloc, n);
//         alloc +=n;
//         printf("El valor de alloc: %p\n", alloc);
//         printf("antiguo valor %p \n", alloc-n);
//         return alloc - n;
//     } else {
//         return 0;
//     }
// }
// void free(char *p) {

//     if (p >= mantis && p < mantis + ALLOC) {
//         // printf("Valor de p: %p, valor de mantis:%p, valor de ALLOC: %p, la suma: %p",p,mantis, ALLOC, ALLOC + mantis );
//         alloc = p;
//     }
// }

// //Lo que entiendo es que en este caso tenemos para comprobar si en este caso el buffer mantis que tiene un tamaño predeterminado de memoria asignada en la cantidad que sea
// // cumpliendo la condicion de que si no sobrepasa o iguala el valor estemos mandando 0 al decir que desborda el valor de memoria
// int main(void)
// {
//      char *v = alloc_Control(3000);
//     //Hasta donde entendí lo que hacemos es comprobar la capacidad del dato que mandamos es para evitar el desvorde del buffer
//     printf("El desborde de buffer es : %p \n", &mantis[3000]);
//     printf("value %p \n", v);
//     free(v);
//     // printf("Tamaño inicial supongo: %p, tamaño de mantis, %p, direccion de alloc: %p", ALLOC, mantis, alloc);
// }

// Distancia entre apuntadores

#include <stdio.h>

// Funcion para longitud de cadena

int strlen(char *s)
{
    // Longitud de cadena que me van a pasar

    char *p = s;

    while (*p != '\0')
    { // Se sabe que en el caso de las cadenas la terminación es '\0' entonces aprovechando eso
      // printf("Resultado de P:%p\n", p);
      // printf("Resultado de P:%c\n", *p);
        printf("Resultado de P:%p\n", p);
        printf("Resultado de P:%c\n", *p);

        p++; // Junto a la aritmetica de punteros determinaremos la cantidad de elementos antes de toparnos con '\0'
    }
    printf("valor final: l: %p\n", p);
    printf("valor iniciar: l: %p\n", s);

    // printf("resta de ambos: %p\n", p - s);
    // Se esta pasando el valor de final de la cdena referente a la direccion de memoria con el valor s que es &l['c']

    return p - s;
}

int main(void)
{

    int g[5] = {5, 6, 7, 8, 9};
    // int *p = &g[1];
    // int *q = &g[3];
    // printf("Seccion desde --> g:%p\n",g);
    // printf("Quiero saber ubicaciones de memoria: p:%p, q:%p ",p, q);
    // printf("Para saber la distancia de memoria se tiene: %p", p+2);

    char l[4] = {'a', 'b', 'c', 'd'}; //En este caso estoy diciendo que es {a,b,c,d}

    // printf("valor iniciar: l: %p\n", l);
    int d = strlen(l);
    printf("valor final del array: %p\n", &l[0]);
    printf("valor de longitud de cadena de caracteres: %d", d);
    // Se puede hacer una variacion del len para saber longitud de cadena
}
