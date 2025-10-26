#include <stdio.h>
// #include <stdbool.h>

int lengthOfLongestSubstring(char *s)
{

    int g[255];

    for (int i = 0; i < 254; i++)
        g[i] = -1;

    // Variables utiles para el crecimiento;

    int maxlen = 0;
    int start = 0;

    for (int end = 0; s[end] != '\0'; end++)
    {

        char hh = s[end];

        if (g[(unsigned)hh] >= start)
        {
            start = g[(unsigned)hh] + 1;
        }

        g[(unsigned)hh] = end;

        int len = end - start + 1;
        if (maxlen < len)
            maxlen = len;
    }

    return maxlen;
}

// void longest_character(char *h)
// {
//     char ge[12];

//     int i = 0;

//     int j = 0;

//     while (*(h + i) != '\0')
//     {
//         bool hh = true;
//         int g = i + 1;
//         while (*(h + g) != '\0')
//         {

//             if (h[i] == h[g])
//             {
//                 // printf("Tenemos lo siguiente:%c, con %c\n", h[i], h[g]);
//                 hh = false;
//                 break;
//             }
//             g++;
//         }

//         if (hh == true)
//         {
//             ge[j++] = h[i];
//         }
//         i++;
//     }
//     ge[j] = '\0';

//     printf("Estamos usando: %s\n", ge);
//     int pp = 0;
//     int kk[12];
//     int hy = 0;
//     int mayor = 0;
//     while (*(ge + pp) != '\0')
//     {

//         // A, B, C
//         int hj = 0;
//         int gg = 0;
//         while (*(h + hj) != '\0')
//         {

//             if (h[hj] == ge[pp])
//             {
//                 kk[gg++] = hj;
//             }

//             hj++;
//         }

//         while (hy < gg)
//         {
//             hy++;
//         }

//         if (mayor < hy)
//         {
//             mayor = hy;
//         }

//         // Cantidad de repetidas y donde

//         pp++;
//     }

//     printf("La repetición es: %d\n",mayor);
// }

int main(void)
{
    // Qncontrar longitud de string(cadena de caracteres) de conjunto de elementos continuos que sean distintos

    char h[] = "abcabcbb";
    char j[] = "pwwkew";

    // Tenemos el vector con los elementos que cortara {a,b,c,a,b,c,b,b}

    int f = lengthOfLongestSubstring(h);
    printf("Tenemos:%d", f);
}