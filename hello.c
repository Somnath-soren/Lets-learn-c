#include<stdio.h>
void func(int *a);

int main()
{
  printf ("Hello World\n");
  int a=10;
  // a=func(a)
  printf("%d\n",a);
  func(&a);
  printf("after callig a  is : %d\n",a);
  return 0;
}
void func(int* a)
{
  *a=*a+5;

}
