#include <stdio.h>
int main()
{
   int a[5], b[5], c[10], i;

   printf("first array :\n");
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &a[i]);
   }
   printf("second array :\n");
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &b[i]);
   }
   printf("after merge array :\n");
   for (i = 0; i < 5; i++)
   {
      c[i] = a[i];
      c[i + 5] = b[i];
   }

   for (i = 0; i < 10; i++)
   {
      printf("%d ", c[i]);
   }
}