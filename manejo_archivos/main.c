#include <stdio.h>

int main()
{
    FILE *fp = fopen("c:/Users/gmach/Desktop/RV_in_C/manejo_archivos/capa.txt", "wb+"); // Era por la seguridad de la ruta

    if (fp == NULL)
    {
        perror("Error nomas");
    }

    int b = 4;
    int *a = &b;
    
    int cpo= fwrite(a, sizeof(int), 1, fp);
    int capa = fread(a, sizeof(int), 1, fp);


    printf("Value de %d s %d\n", capa, cpo);
    // if (fp == NULL) {
    //     // La función fopen() falló
    //     perror("Error al crear el archivo"); // Imprime la razón del error
    //     return 1;
    // }


    // // Si el código llega aquí, el archivo se abrió correctamente
    // // Puedes continuar con fwrite()
    // fclose(fp);
    // return 0;
}