#include<stdio.h>

const int MAX=3;
int main()
{
  int var[]={25,28,42};
  int i, *ptr;


   /* let us have array address in pointer */
   ptr = var;

   for(i=0;i<MAX;i++)
   {
     printf("address of variable [%d]:%p \n:",i,ptr);
     printf("Value of variable [%d] : %d \n",i,*ptr);

      /* move to the next location */
      ptr++;
   }
   return 0;
}
