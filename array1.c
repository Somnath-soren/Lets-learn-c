#include<stdio.h>
int main()
{
  int marks[][4]={{12,16,45,55},
                {65,34,74,12}};

for(int i=0;i<2;i++)
{
  for(int j=0;j<4;j++)
  {
    // printf("The value of %d %d is %d\n",i,j,marks[i][j]);
    printf("%d ",marks[i][j]);
  }
  printf("\n");
}
return 0;
}
