// #include <stdio.h>

// // #define GOTO 5;

// // char *p[GOTO];

// // int main(void)
// // {
// //    char *p[10];
// //    *p = "carlos";

// // //    printf("Tenemos a : %s", *(p+1));

// //    for (int i = 0; i < 10; i++) {
// //     printf("%p, ademas el dato de las letras c:%s\n", *(p+i),*(p+i));
// //    }
// // }

#include <stdio.h>

#define MAX 20
int getline(char p[], int a);
void copy(char *to, char *of);
// void copy(char a[], char b[]);

int main(void)
{

    int max;
    int len;
    char line[MAX];
    char longest[MAX];
    max = 0;

    while ((len = getline(line, MAX)) > 1)
    {

        if (len > max)
        {
            max = len;

            copy(longest, line);
        }
    }
    printf("necesitamos el mayor:%s", longest);

    // while (len = getline(line, MAX) > 0)
    // // { // contar la cantidad de caracteres que se tiene
    // //     if (len > max)
    // //     {
    // //         max = len;
    // //         copy(longest, line); // Donde se guarda la cadena de caracteres, para copiar la cadena de caracteres
    // //     }
    //     if (max > 0)
    //     {
    //         printf("%s", longest);
    //     }

    //     return 0;
    // }
}

int getline(char p[], int a)
{

    // Contar la cantidad que tenemos de carcateres

    int g, c, b;

    for (g = 0; g < a - 1 && (c = getchar()) != EOF && c != '\n'; ++g)
    {
        p[g] = c;
    };
    if (c == '\n')
    {
        p[g] = c;
        ++g;
    }

    p[g] = '\0'; // Estoy mandando el tamaño de la cadena

    return g;
}

void copy(char *to, char *of)
{   /*Nunca olvidarse el parentesis (_\_____/_)*/

    while ((*to++ = *of++) != '\0')
        ;
}
