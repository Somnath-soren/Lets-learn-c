#include<stdio.h>

int *counter()
{
  static int i=0; //static does not intialize again
  printf("couter value is = %d\n",i);
  i++;
  return &i;
}
int main()
{
  int *i;
  i=counter();
  printf("main value : %d\n",*i);
  (*i)++;
  i=counter();
  return 0;
}


/*manuplate in main function and reflacte in function
with help of pointer function and return value */
