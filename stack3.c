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
    int x;

    printf("Pres 1 to insertEnd \n");
    printf("Pres 2 to delete \n");
    printf("Pres 3 to display \n");
    printf("Pres 0 to Exit \n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        insertEnd(x);
        break;

    case 2:
    delete();
    break;

    case 3:
    display();
    break;

    case 0:
    break;

    
    default:
        break;
    }
    
    
 
    
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);


    // delete();
    // delete();
    // delete();
    // delete();
    // delete();

    display();
}