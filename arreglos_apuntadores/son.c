#include <stdio.h>

void shellsort(int v[], int n)
{
    int gap, j, i, tmp;

    for (gap = n / 2; gap > 0; gap /= 2)
    {
        printf("Quiero saber de.. gap:%d\n", gap);
        for (i = gap; i < n; i++)
        {
            printf("Quiero saber de.. i:%d\n", i);

            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                printf("Quiero saber de.. i:%d, j:%d, gap:%d, v[j]:%d, v[j+gap]:%d\n", i, j, gap, v[j], v[j + gap]);

                tmp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = tmp;
            }
        }
    }

}

int main(void)
{

    int k[5] = {5, 3, 7, 9, 1};
    shellsort(k, 5); //Extraño lo reconoce como puntero 

    for (int i = 0; i < 5; i++)
    {
        printf("Valor de k[%d] = %d \n", i, k[i]);
    }
}