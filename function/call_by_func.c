#include<stdio.h>
/* function declaration*/

void swap(int a,int b);

int main()
{
  int x=50;
  int y=100;

  printf(" before swap The valus of x : %d\n",x);
  printf(" before swap The valus of y : %d\n",y);

  swap(x,y);

  printf(" After swap The valus of x : %d\n",x);
  printf(" After swap The valus of y : %d\n",y);

  return 0;
}
void swap(int a,int b)
{
  int temp;

  temp = a;
  a = b;
  b = temp;
  return;
}
