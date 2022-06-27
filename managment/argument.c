#include<stdio.h>
#include<stdarg.h>

double average(int num,...)
{
  va_list valist;
  double sum=0.0;
  int i;

  /* initialize valist for number of arguments*/

  va_start(valist,num);


   /* access all the arguments assigned to valist */
   for(i=0;i<num;i++)
   {
     sum+=va_arg(valist,int);
   }

   /* clean memory reserved for valist */
   va_end(valist);

   return sum/num;
}
int main()
{
  printf("Average of 2,3,4,5,=%f\n",average(2,3,4,5));
  printf("Average of 5,10,15=%f\n",average(5,10,15));
  return 0;
}
// Only ellipses will be used to pass variable number of arguments.
/* Define a function with its last parameter as ellipses and
 the one just before the ellipses is always an int which will
 represent the number of arguments.*/
