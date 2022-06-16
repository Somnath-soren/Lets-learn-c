#include<stdio.h>

int main()
{
  int var=200;
  int *ptr;
  int **ptra;
 /* let us have array address in pointer */

 ptr = &var;

 /* let us pointer  address in pointer */
ptra = &ptr;

printf("Value of var : %d\n",var);
printf("Value of *ptr : %d\n",*ptr);
printf("Value of **ptra : %d\n",**ptra);

printf("Address of var : %p\n",&var);
printf("Address of *ptr : %p\n",ptr);
printf("Address of **ptra : %p\n",ptra);

return 0;
}
