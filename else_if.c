#include<stdio.h>

int main()
{
  int a=12;
  int b=10;
  int c=21;
  if(a>b && a>c)
  {
    printf("A is grether than B and C \n");
  }
  else if(b>a && b>c)
  {
    printf("B is greater tha A and C\n");
  }
  else if(c>a && c>b)
  {
    printf("C is geather than A and B\n");
  }
  else
  {
    printf("All are eqaul\n");
  }
  return 0;
}
