#include<stdio.h>

double getMultiply(int *arr,int size);

int main()
{
  int num[4]={10,2,2,10};
  double multiply;

  multiply = getMultiply(num,4);

  printf("value is : %f\n",multiply);

  return 0;
}

double getMultiply(int *arr,int size)
{
  int multi=1,i;
  double multiply;


  for(i=0;i<size;i++)
  {
    multi*=arr[i];
  }
  multiply=multi;
  printf("%f\n",multiply);
  return multiply;
}
