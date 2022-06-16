// with argument with return vale
#include<stdio.h>
int multi(int a,int b)
{
  return a*b;
}
int main()
{
  int a=5;
  int b=6;
  int c;
  c=multi(a,b);
  printf("Multiply of two number is %d\n",c);
  return 0;
}
