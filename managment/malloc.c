#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *ptr;
  int i,n;
//create a malloc
printf("Enter the size of array\n");
scanf("%d",&n);

ptr = (int*)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
  printf("Enter the value at %d array\n",i);
  scanf("%d",&ptr[i]);
}
for(i=0;i<n;i++)
{
  printf("Array at %d is %d\n",i,ptr[i]);
}
return 0;
}
