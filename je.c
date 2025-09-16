#include <stdio.h>

struct S { char c; int i; };   // padding → 8 B (x86-64)

int main(void)
{
    struct S s[3] = { {'a', 1}, {'b', 2}, {'c', 3} };
    struct S *p = s;

    printf("sizeof(struct S) = %zu\n", sizeof(struct S));
    for (int i = 0; i < 3; ++i)
        printf("p+%d → %p  (s[i].i=%d)\n", i, (void *)(p + i), (p + i)->i);
    return 0;
}