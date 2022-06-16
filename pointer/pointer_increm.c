#include<stdio.h>
const int MAX=3;

int main()
{
  int var[]={10,25,45};
  int i,*ptr;
  /* let us have address of the first element in pointer */
  ptr = &var[0]; /* and ptr=var; same indicate var[0] loca*/

  for(i=0; i<MAX ; i++)
  {
    printf("Address of var[%d] = %p\n",i,ptr);
    printf("Value of var[%d] = %d\n",i,*ptr);

    ptr++;
  }
  return 0;
}
