#include <stdio.h>

#define MAXLINES 5 //"carlos mamani achinquipa" "Jose rober gomez bolaños" "...->"

char *p[MAXLINES];

// int readlines(char *p[], int lines);

// void writelines(char *p[], int lines);

// void qsort(char *p[], int derecha, int izquierda);

#define MAX 30
int getline(char p[], int line); // Sacar el tamaño de cadena de carcateres que pasamos nosotros
char *alloc(int f);              // Alloc guarda bytes sobre un buffer
void strcpy(char *p, char *h);

int readlines(char *p[], int lines)
{

    int len, nlines = 0;
    char *f, k[MAX];

    while (nlines < lines && (len = getline(k, MAX)) > 0)
    {
        if (nlines >= lines || (f = alloc(len)) == NULL)
        {
            return -1;
        }
        else
        {
            k[len - 1] = '\0';
            strcpy(f, k);
            p[nlines++] = f;

            // k[] = "carlosmamani\n\0" -> "carlosmamani\0\0"
            // *p[] = {0*200,0*201,0*202} -> f -> 0*201
        }

        // if (nlines > lines) //(f = alloc(len)) == NULL
        // {
        //     return -1;
        // }
        // else
        // {
        //     k[len - 1] = '\0'; //"caracter formado en el uso de getline "
        //     // Necesito cambiar la dirección de memoria para encontrarme en la sección donde empezaria mi nuevo valor
        //     strcpy(f, k); // &[0] -> dirección de memoria de la posición del arreglo
        //     p[nlines++] = f; // Direccion de memoria
        // }
    }
    return nlines;
}

void strcpy(char *p, char *h)
{

    while ((*p++ = *h++))
        ;
}

int getline(char p[], int line)
{
    int c, h;
    for (h = 0;h < line - 1 && (c = getchar()) != EOF && c != '\n'; ++h)
    {
        
        p[h] = c;

        // printf("Tenemos la cantidad de d:%d y tenemos line:%d\n", h, line);
    }

    if (c == '\n')
    {
        p[h] = c;
        ++h;
    }

    p[h] = '\0';

    for (int i; i < h; i++ ) {

        printf("%d\n", );
    }

    return h;
}

void writelines(char *g[], int li)
{
    int i;
    for (i = 0; i < li; i++)
    {
        printf("%s\n", g[i]);
    }
}

int main(void)
{
    int linesdd = 0;
    if ((linesdd = readlines(p, MAXLINES)) >= 0)
    {
        printf("Mamanda: %d", linesdd);
        writelines(p, linesdd);
        return 0;
    }

    // getline(lectura y envio de tamaño),alloc(almacenar en buffer informacion),strcmp(identificarmayor),strcpy(pasardatos),qsort(ordenmaient)

    //"carga de papeles"
    //"carga de comida"
    //..
    // Imprimirlas en orden

    // int nlines = 0;

    // if ((nlines = readlines(p, MAXLINES)) > 0)
    // {
    //     // Qsort
    //     // writeliens
    // }
    // else
    // {
    //     printf("Fue menor a 0");
    // }
}
// MAX el buffer
static char gg[MAX];  // Iniciado el buffer con la cntidad
static char *po = gg; // La dirección de memoria

// Tenemos el buffer, pero iniciamos desde donde inicia el dato
char *alloc(int g)
{
    if (gg + MAX - po >= g)
    {
        po += g;
        return po - g;
    }
    else
    {
        return NULL;
    }
}