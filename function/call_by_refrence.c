#include<stdio.h>
/*function declaration */
void swap(int *x,int *y);

int main()
{
  /* local variable defination */
  int a=50;
  int b=100;
  printf("Before the value of a is : %d\n",a );
  printf("Before the value of b is : %d\n",b );
  /* calling function to swap value */
  swap(&a,&b);
  printf("After swap the value of a is:%d\n",a );
  printf("After swap the value of b is:%d\n",b);
  return 0;
}
void swap(int *x,int *y)
{
  int temp;

  temp = *x; /* save the value of x */
  *x = *y;   /*put y into x */
  *y = temp;   /* put temp into y */
}
