#include<stdio.h>

float getAverage(int arr[],int size);
int main()
{
  int num[5]={42,44,65,47,21};
  float avg;
  avg = getAverage(num,5);
  printf("Average is %f\n",avg);
  return 0;
}
float getAverage(int arr[],int size)
{

  int i;
  int sum=0;
  float avg;
  for(i=0;i<5;i++)
  {
    sum+=arr[i];
  }
  printf("sum : %d\n",sum);
  avg = sum/size;
  return avg;
}
