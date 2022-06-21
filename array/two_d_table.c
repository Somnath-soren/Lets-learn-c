#include<stdio.h>

int main()
{
  int multiTable[3][10]; /* 10 table of 3,3 is 1 d*/

  for(int i=0;i<10;i++)
  {
    multiTable[0][i]=2*(i+1);
  }
  for(int i=0;i<10;i++)
  {
    printf("2 X %d : %d\n",i+1,multiTable[0][i]);
  }

  for(int i=0;i<10;i++)
  {
    multiTable[0][i]=7*(i+1);
  }
  for(int i=0;i<10;i++)
  {
    printf("7 X %d : %d\n",i+1,multiTable[0][i]);
  }

  for(int i=0;i<10;i++)
  {
    multiTable[0][i]=9*(i+1);
  }
  for(int i=0;i<10;i++)
  {
    printf("9 X %d : %d\n",i+1,multiTable[0][i]);
  }
  return 0;
}
