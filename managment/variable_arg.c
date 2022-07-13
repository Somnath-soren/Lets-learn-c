#include<stdio.h>
#include<stdarg.h>

int average(int num,...)
{
  double sum=0.0;
  int i;
  va_list valist;
  va_start(valist,num);

  for(i=0;i<num;i++)
  {
    sum+=va_arg(valist,int);
  }
  va_end(valist);
  return sum/num;
}
int main()
{
  printf("Average of 5,8,7,9,15,20 =%d\n",average(6,5,8,7,9,15,20));
  return 0;
}
