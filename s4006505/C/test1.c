#include <stdio.h>
int main(void)
{

   int num;

   printf("User Input: ");

   scanf("%d", &num);

   printf("Counting from 0 to %d \n", num);

   if (num)
   {
      for (int i = 0; i <= num; i++)
      {
         printf("%d \n", i);
      }
   }
   return 0;
}