#include<stdio.h>

int Maxarray(int arr[],int n)
{
  int max=0;
  for(int i=0;i<=n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  return max;
}
int main()
{
  int array[]={120,450,15,85,98,78,46,89};
  int max = Maxarray(array,8);

  printf("Max no in the array is %d\n",max);
  return 0;
}
