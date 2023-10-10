#include <stdio.h>
#define n 5
int a[n], top = -1;
int insertEnd(int data)
{
    if (top >= n - 1)
    {
        printf("--> || Stack Is full || <-- \n");
    }
    else
    {
        top++;
        a[top] = data;
    }
}
int delete()
{
    if (top < 0)
    {
        printf("--> arry position over :\n");
    }
    else
    {
        top--;
    }
}
int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int x,i;
  while(1){

    printf("\nPres 1 to insertEnd \n");
    printf("Pres 2 to delete \n");
    printf("Pres 3 to display \n");
    printf("Pres 0 to Exit \n");
    scanf("%d",&x);



    switch (x)
    {
    case 1:
     printf("enter your insert value :");
     scanf("%d",&i);
        insertEnd(i);
        break;

    case 2:
    delete();
    break;

    case 3:
    display();
    break;

    case 0:
    printf("exit\n");
    return 0;

    
    default:
     printf("invalid choice :");
        break;
    }
}
}