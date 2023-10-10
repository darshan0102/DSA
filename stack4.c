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

int firstInsert(int data)
{
    if(top >= n-1)
  {
    printf("stack is overflow...");
  }  

  else if(top < 0)
  {
    top ++;
    a[top] = data;
  }
  else
  {
      top ++;
      for(int i=top; i > 0;i--)
      {
        a[i] = a[i - 1];
      }
       a[0] = data;
  }
}

int firstdelete()
{
     if(top < 0)
     {
        printf("stack is emty");
     }
      else 
      {
         for(int i = 0; i < top; i++)
          {
             a[i] = a[i +1];
          }
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
   firstInsert(30);
   firstInsert(20);
   firstInsert(10);
   display();
}
