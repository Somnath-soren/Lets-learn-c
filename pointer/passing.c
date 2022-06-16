#include<stdio.h>
#include<time.h>

void getSeconds(unsigned long *par);

int main()
{
  unsigned long sec;
  getSeconds(&sec);

  /* print the actual value */
  printf("number of seconds : %ld\n",sec);

  return 0;
}

void getSeconds(unsigned long *par) {
  /* get the current number of second */

  *par = time(NULL);
  return ;
}
// passing pointer to an array
