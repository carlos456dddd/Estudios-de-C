#include <stdio.h>

int strcmp(char *n, char *m) {

    for (; *n == *m; n++,m++) {
        if (*n == '\0') {
            return 0;
        }
     
    }
    
    return *n-*m;


}



int main(void) {

    char a[] = "achinquipa";
    char b[] = "achinquipa";

    int g = strcmp(a,b);

    printf("Voy a mandar lo siguiente :%d", g);

}