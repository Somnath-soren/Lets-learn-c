#include<stdio.h>

const int MAX=4;

int main()
{
  int i=0;
  char *name[]={
    "Rohan Hansda",
    "Bhagan Murmu",
    "Karan Hansda",
    "Hari prasad"
  };

  for(i=0;i<MAX;i++)
  {
    printf("Value of name[%d] = %s\n",i,name[i]);
  }
  return 0;
}
