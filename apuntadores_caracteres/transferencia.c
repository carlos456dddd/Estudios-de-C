#include <stdio.h>

// void cambio( char *a,char *b)
// {

//     while (*a++ = *b++);
// }

void strcat(char *a, char *b)
{

    int i;
    i = 0;

    while (*a++) i++;
    printf("Tenemos que: i++: %d\n", i);
   
    //En este caso ['a','b','c','d',('\0')]
    // while (*a++); //buen[a][s][..]

    for (int k = 0; k < i; k++) if ((*((a-1) + k) = *b++) == 0);

    // while (k < i) // Saber el limite *
    // {
    //     if ((*(a + k + 6) = *b++) == 0)
    //         ;
    //     // {
    //     //     *(a + i) = 'c';
    //     // };
    //     // *(a+i) = 'c'; //Saber que es nullo o 0
    //     // };
    //     //  printf("Muestra de %c\n", *(a + i));
    //     k++;
    // };

    // while ( i ++)
    // {
    //     printf("Quiero saber si existe 14 :%p con el valor :&puntero:%c\n", (a+i), *(a+i));
    //     i++;
    // }
}

int main(void)
{
    // printf("Buenos días");
    // char *g;
    // g ="buenas";
    // char *j;
    // j ="tardes";

    char g[14] = "buenas";
    char j[7] = "tardes";

    strcat(g, j);
    // int i = 0;

    printf("Valores de g:%s, con el de j:%s\n", g, j);

    // while(g[i]) {
    //     printf("Mostrar:%c\n",g[i]);
    //     i++;
    // };

    // printf("Tenemos que los valores son de g:%s y el de j:%s\n", g, j);

    // cambio(g, j);

    // printf("Tenemos que los valores son de g:%s y el de j:%s\n", g, j);
}