#include<stdio.h>

void *getReturn();

int main()
{
  int *marks;
  marks = getReturn();
  marks[1]=50;
  getReturn();
  return 0;
}

void *getReturn()
{
  static int marks[]={45,65,12,35,78,95,99,89};
  int i=0;
  printf("Array element are :\n");
  for(i=0;i<8;i++)
  {
    printf("%d\n",marks[i]);
  }

  return &marks;
}

// if return marks then value print are Error
/* its is show if we change in main fnction it is
reflacte in our function and execute result*/
