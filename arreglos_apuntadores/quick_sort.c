// // Según lo que entiendo necesitamos el pivote
// // Necsitamos valores de izquierda = inicial + 1 y derecha = final
// //

// #include <stdio.h>

// void quicksort(int l[], int izquierda, int derecha)
// {

//     if (derecha < izquierda)
//     {
//         return;
//     }

//     int pivote = l[izquierda];
//     int i = izquierda + 1;
//     int j = derecha;
//     int tmp = 0;
//     while (i <= j)
//     {
//         while (i <= derecha && pivote >= l[i])
//             i++;
//         while (j > izquierda && pivote < l[j])
//             j--;

//         if (i < j)
//         {
//             tmp = l[i];
//             l[i] = l[j];
//             l[j] = tmp;
//         }
//     }
//     l[izquierda] = l[j];
//     l[j] = pivote;

//     quicksort(l, izquierda, j - 1);
//     quicksort(l, j + 1, derecha);
// }

// int main(void)
// {

//     int m[] = {8, 9, 2, 5, 6, 3, 7, 8, 2};
//     int n = sizeof(m) / sizeof(m[0]);

//     quicksort(m, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         printf("%d ", m[i]);
//     return 0;
// }

#include <stdio.h>

void quicksort_lomuto(int k[], int izquierda, int derecha)
{

    int i, last; //Según lo que recuerdo en este caso solo se trabaja con el lado izquierdo y last definira nuestro pivote (dodne termina los elementos de izquierda o menores que el pivote)

    if (izquierda >= derecha)
        return;


    void swap(int j[], int a, int b);

    swap(k, izquierda, (izquierda + derecha)/2);

    last = izquierda;

    for (i = izquierda + 1; i <= derecha; i++) {
        
        if ( k[izquierda] > k[i]) {
            swap(k, ++last, i);
        }

    }

    swap(k, izquierda, last);

    quicksort_lomuto(k, izquierda, last-1);
    quicksort_lomuto(k, last+1, derecha);
}

void swap(int j[], int a, int b)
{

    int tmp;
    tmp = j[a];
    j[a] = j[b];
    j[b] = tmp;
}

int main(void)
{

    int l[] = {8, 9, 7, 2, 6, 3, 7, 8};

    quicksort_lomuto(l, 0, 7);

    for(int i; i < 8; i++) {
        printf("%d",l[i]);
    }

}
