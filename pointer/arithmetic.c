#include<stdio.h>

int main()
{
  int a=32;
  int *ptr;

  ptr=&a;
printf("address of ptr : %d\n",ptr);
printf("address of ptr+1 : %p\n",ptr);


return 0;
}
