#include<stdio.h>

int *getArray(int *a)
{
  int i;
  printf("Enter the array element ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  return a;
}
int main()
{
  int *n;
  int a[5];
  int i;

  n = getArray(a);
  printf("\nElement of array are : ");
  for(i=0;i<5;i++)
  {
    printf("%d\n",n[i]);
  }
  return 0;
}
