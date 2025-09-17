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

// #include <stdio.h>

// // Funcion para longitud de cadena

// int strlen(char *s)
// {
//     // Longitud de cadena que me van a pasar

//     char *p = s;

//     while (*p != '\0')
//     { // Se sabe que en el caso de las cadenas la terminación es '\0' entonces aprovechando eso
//       // printf("Resultado de P:%p\n", p);
//       // printf("Resultado de P:%c\n", *p);
//         printf("Resultado de P:%p\n", p);
//         printf("Resultado de P:%c\n", *p);

//         p++; // Junto a la aritmetica de punteros determinaremos la cantidad de elementos antes de toparnos con '\0'
//     }

//     // printf("resta de ambos: %p\n", p - s);
//     // Se esta pasando el valor de final de la cdena referente a la direccion de memoria con el valor s que es &l['c']

//     return p - s;
// }

// int intlen(int *h)
// {

//     int *g = h;
//     while (*g != '\0')
//     {
//         printf("Recorridos de la direccion de memoria: %p\n", g);
//         printf("Recorridos de la direccion de memoria: %d\n", *g);

//         g++;
//     }

//     return g - h;
// }

// int main(void)
// {

//     // int *p = &g[1];
//     // int *q = &g[3];
//     // printf("Seccion desde --> g:%p\n",g);
//     // printf("Quiero saber ubicaciones de memoria: p:%p, q:%p ",p, q);
//     // printf("Para saber la distancia de memoria se tiene: %p", p+2);

//     // char l[4] = {'a', 'b', 'c', 'd'}; // En este caso estoy diciendo que es {a,b,c,d}
//     // char *j;
//     // j = "carlos";
//     // int d = strlen(j);

//     int g[5] = {5, 6, 7, 8, 9};
//     int f = intlen(g);
//     printf("Determinar el tamaño de la cadena: %d\n", f);
//     // printf("valor final del array: %p\n", &l[0]);
//     // printf("valor de longitud de cadena de caracteres: %d", d);
//     // Se puede hacer una variacion del len para saber longitud de cadena
// }

//

#include <stdio.h>

#define ALLOCSIZE 20             // tamaño del buffer total
static char allocbuf[ALLOCSIZE]; // memoria reservada
static char *allocp = allocbuf;  // apunta al inicio del buffer

char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n)
    {                      // ¿hay espacio suficiente?
        allocp += n;       // muevo el puntero
        printf("tenemos que : %p\n", allocp);
        return allocp - n; // devuelvo el inicio del bloque
    }
    else
    {
        return NULL; // no hay espacio
    }
}

void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)


    {   
        printf("TENEMOS QUE:%p, p:%p, el allocp:%p\n", allocbuf, p, allocp);

        allocp = p; // libero desde ahí
    }
}

int main()
{

    printf("inicio de &buff[0] :%p\n", allocp);
    char *p1 = alloc(5);  // pido 5 bytes
    char *p2 = alloc(7);  // pido 7 bytes
    char *p3 = alloc(10); // pido 10 bytes (fallará)

    printf("Dirección de p1: %p\n", p1);
    printf("Dirección de p2: %p\n", p2);
    printf("Dirección de p3: %p\n", p3);

    afree(p2);           // libero lo asignado a p2
    afree(p1);
    // char *p4 = alloc(6); // vuelvo a pedir 6 bytes

    // printf("Dirección de p4: %p\n", p4);

    return 0;
}
