#include<stdio.h>

void printTable(int *multiTable,int num,int n)
{


  printf("Table of %d is : \n",num);
  for(int i=0;i<10;i++)
  {
    multiTable[i]=num*(i+1);
  }
  for(int i=0;i<10;i++)
  {
    printf("%d X %d = %d\n",num,i+1,multiTable[i]);
  }
  printf("*******************************\n\n");
}
int main()
{
  int multiTable[3][10];

    printTable(multiTable[0],5,10);
    printTable(multiTable[1],7,10);
    printTable(multiTable[2],9,10);
    // printTable(multiTable[3],5,10);
    return 0;
  }
  // multiTable[i] is 1d array it means 3 1d array size of 10
  // i.e 3 row and 10 coloum
