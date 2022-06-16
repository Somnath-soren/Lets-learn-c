#include<stdio.h>

int main()
{
  double arr[4]={1000.0,14.0,65.0,12.0};
  double *p;
  int i;

  p=arr;
// value print by using pointer
printf("Array value using pointer\n");
  for(i=0;i<4;i++)
  {
    printf("*(p + %d) : %f\n",i,*(p+i));
  }

  // value print by address of array
  printf("Array value using address of arr\n");
  for(i=0;i<4;i++)
  {
    printf("value of array %d : %f\n",i,*(arr + i));
  }
  return 0;
}
