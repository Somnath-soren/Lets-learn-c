#include<stdio.h>

int main()
{
  int a [4][3];//={{5,6,4},{5,6,8},{8,9,7},{2,4,6}};
  int i,j;
//input array elements
  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter the array element\n");
      scanf("%d",&a[i][j]);
    }
  }
  /* out each array element in value */
  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Array element are[%d][%d] : %d\n",i,j,a[i][j]);
    }
  }
  return 0;
}
