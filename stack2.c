#include<stdio.h>
#define n 5
int a[n],top = -1;
int insertEnd(int data){
    if(top>=n-1){
        printf("stack is overflow\n");
    }else{
        top++;
        a[top] = data;
    }
}
int delete()
{
    if(top < 0)
    {
        printf("stack is emty\n");
    }
    else
    {
        top--;
    }
}


int display(){
    for(int i=0; i<=top; i++){
    printf("%d\n",a[i]);
}
}

int main()
{
    insertEnd(10);
      delete();
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    delete();
   // insertEnd(600);
    display();  
  
}
