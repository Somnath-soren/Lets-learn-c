#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *ptr;
  int i,n;

  printf("Enter the size of array want to create\n");
  scanf("%d",&n);
  ptr = (int*) calloc(n,sizeof(int));

  for(i=0;i<n;i++)
  {
    printf("Enter the value of array at %d is \n",i);
    scanf("%d",&ptr[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("Value at %d is %d\n",i,ptr[i]);
  }

  // realloc
  printf("Enter the new size of array want to\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("Enter the value of array at %d is \n",i);
    scanf("%d",&ptr[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("Value at %d is %d\n",i,ptr[i]);
  }
  free(ptr);
  return 0;
}
