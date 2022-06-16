#include<stdio.h>
// int *getArray;

int *getArray()
{
  static int arr[5]; //must add static 
  int i;

  printf("Enter the array element");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  return arr;
}
int main()
{
  int *n;
  int i=0;

  n = getArray();

  printf("\n Elements of the array are : ");
  for(i=0;i<5;i++)
  {
    printf("%d\n",n[i]);
  }
  return 0;
}
