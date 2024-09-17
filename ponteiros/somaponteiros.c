#include <stdio.h>

int main()
{
    int *p, *q;
    int a = 10, b = 5, c;
    p = &a;
    q = &b;
    c = *p + *q;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de p: %d\n", p);
    printf("Valor de *p: %d\n", *p);
    printf("Valor de q: %d\n", q);
    printf("Valor de *q: %d\n", *q);
    printf("Valor de c: %d\n", c);
}
