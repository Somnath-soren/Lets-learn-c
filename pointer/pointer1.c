#include<stdio.h>
int main()
{
  int var1;
  char var2;

  printf("address of var1 variable : %p\n",&var1);
  printf("address of var2 variable : %p\n",&var2);

  int var=20;  /*actual variable declaration */
  int *ip;    /* pointer variable declaration */

  ip = &var; /* store address of var in pointer variable */

  printf("address of var variable : %p\n",&var);

  /* address store in pointer variable */
  printf("address store in pointer variable: %p\n",ip);

  /* access the value using the pointer */
  printf("Value of *ip variable : %d\n",*ip);

  return 0;
}
