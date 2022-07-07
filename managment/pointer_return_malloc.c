#include<stdio.h>
#include<stdlib.h>
int* Add(int* a,int* b);
// void printHello()
// {
//
//   printf("Hello World\n");
// }

int* Add(int* a,int* b)
{
  int c = (*a)+(*b);
  return &c;
}

int main()
{
  int a=6, b=8;

  int* ptr = Add(&a,&b);

  printf("sum = %d\n",*ptr);
  // return 0;
}
