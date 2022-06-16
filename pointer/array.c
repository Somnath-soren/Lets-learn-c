#include<stdio.h>
const int MAX=3;

int main()
{
  int var[]={45,56,75};
  int i;

  for(i=0;i<MAX;i++)
  {
    printf("Value of var is[%d] : %d\n",i,var[i]);
  }
  return 0;
}

// lets learn about pointer to array
