#include <stdio.h>
#define n 10
int binarysearch(int a[], int low, int high, int x)
{
    if (high >= 1)
    {
        int mid = (low + high) / 2; 
        if (a[mid] == x)
        {
            return mid + 1;
        }
        else if (a[mid] > x)
        {
            return binarysearch(a, low, mid - 1, x);
        }
        else
        {
            return binarysearch(a, mid + 1, high, x);
        }
        return -1;
    }
}
int main()
{
    int i, x, low, high, index;
    int a[n] = {2, 5, 7, 9, 12, 15, 18, 21, 25, 28};
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nenter search element : ");
    scanf("%d", &x);

    index = binarysearch(a, 0, n - 1, x);
    if (index < 0)
    {
        printf("element is not found");
    }
    else
    {
        printf("element found at %d position ", index);
    }
    return 0;
}