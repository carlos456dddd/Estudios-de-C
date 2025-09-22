

//"cadena" 1 - "racumincadena" 2

#include <stdio.h>

int strend(char *p1, char *p2)
{

    int i, w, t;
    i = w = t = 0;
    while (*p2++)
        i++;
    while (*(p1 + w))
        w++;
    while (*p1)
    {
        if (*(p1 + (w - i)) == *(p2 - i - 1))
            t++;
        p1++;
        p2++;
    }
    return (t == (i + 1)) ? 1 : 0;
}

int main(void)
{
    char g[] = "cadenadeoracio";
    char j[] = "oracio";

    int hh = strend(g, j);

    printf("Tendremos lo siguiente: %d", hh);
}