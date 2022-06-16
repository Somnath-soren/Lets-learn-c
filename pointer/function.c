// Return pointer from functions in C
#include<stdio.h>
#include<time.h>
#include <stdlib.h>

/* function to generate and return random number*/
int *getRandom()
{
  static int r[10];
  int i;

/* set the seed */
 srand((unsigned) time(NULL));
for(i=0;i<10;++i)
{
  r[i]= rand();
  printf("%d\n",r[i]);
}
return r;
}
int main()
{
  /*main function to call above define func*/
  int *p; /*pointer to an int*/
  int i;
  p=getRandom();
  for(i=0;i<10;i++)
  {
    printf("*(p+[%d]) : %d\n",i,*(p+i));
  }
  return 0;
}
// RECALL AGAIN AND AGAIN
