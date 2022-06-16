#include<stdio.h>

double getAverage(int arr[],int size);
int main()
{
  int num[7]={65,45,12,39,14,65,66};
  int i;
  double avg;
  avg = getAverage(num,7);
  printf("Average of the array is : %f",avg);
  return 0;
}
double getAverage(int arr[],int size)
{
  int i,sum=0;
  double avg;
  for(i=0;i<size;i++)
  {
    sum+=arr[i];
  }
  printf("Sum of array : %d\n",sum);
  avg=sum/size;
  return avg;
}
