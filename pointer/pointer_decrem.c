#include<stdio.h>
const int MAX=3;

int main()
{
  int var[]={25,56,23};
  int i,*ptr;
/* let us have address of the first element in pointer */
  ptr = &var[MAX-1];

  for(i=MAX; i>0; i--)
  {
    printf("Address of var[%d] = %p\n",i-1,ptr);
    printf("Value of var[%d] = %d\n",i-1,*ptr);

          /* move to the previous location */
    ptr--;
  }
  return 0;
}
