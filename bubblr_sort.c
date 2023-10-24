#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
    int a[n], i, t;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 50 + 1;
    }
    printf("unsorted array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
   
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("\nsorted array is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}