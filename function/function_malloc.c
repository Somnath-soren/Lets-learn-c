#include<stdio.h>
#include <stdlib.h>
void printHello()
{
  printf("Hello World\n");
}
int* Add(int* a, int* b)
{
   int* c = (int *)malloc(sizeof(int));
   *c = (*a )+(*b);
  return c;
}
int main()
{
  int a=3,b=4;

  int *ptr = Add(&a,&b);
  printHello();
  printf("Sum = %d\n",*ptr);
  return 0;

}
