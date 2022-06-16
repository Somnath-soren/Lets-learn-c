#include<stdio.h>
const int MAX=4;

int main()
{
  int var[]={45,56,78,50};
  int i,*ptr[MAX];

  for(i=0;i<MAX;i++)
  {
    ptr[i]=&var[i]; /*assing address to integer*/
  }
  for(i=0;i<MAX;i++)
  {
    printf("Value of var[%d] : %d\n",i,*ptr[i]);
  }
  return 0;
}
