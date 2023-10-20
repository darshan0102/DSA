// self referntial linklist  node
#include <stdio.h>
struct self
{
    int n;
    char c;
    struct self *ptr;
};
int main()
{
    struct self a, b, c;

    a.n = 65;
    a.c = 'A';
    a.ptr = NULL;

    b.n = 66;
    b.c = 'B';
    b.ptr = NULL;

    c.n = 67;
    c.c = 'C';
    c.ptr = NULL;

    // printf("A = value of n : %d\t ch : %c", a.n, a.c);
    // printf("\nB = value of n : %d\t ch : %c", b.n, b.c);

    // a.ptr = &b;
    // b.ptr = &a;
    c.ptr = &a;

    printf("\nc = value of n : %d\t ch : %c", c.ptr->n, c.ptr->c);
}