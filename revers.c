#include<stdio.h>

int main()
{
    int a[100],i,j,n;

    printf("enter limit of arr :");
    scanf(" %d",&n);

    for(i=0; i<n; i++)
    {
        printf("enetr value of a[%d] :",i);
        scanf(" %d",&a[i]);
    }

    for(i=0; i<n; i++)
    { 
        if(i==0)
        {
            j=a[i];
            a[i]=a[n-1];
            a[n-1]=j;

        }

    }

      for(i=0; i<n; i++)
      {
        printf("%d ",a[i]);
      }
}