//Generate 10 random num using stdlib
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int MAX=10;
int *getRandom()
{
  static int r[10];
  int i;

  // set the seed

  srand((unsigned)time(NULL));
  for(i=0;i<MAX;i++)
  {
    r[i]=rand();
    printf("%d\n",r[i]);
  }
  return r;
}
int main()
{
  int *p;
  int i;

  p=getRandom();
  for(i=0;i<MAX;i++)
  {
    printf("(p+%d) : %d\n",i,*(p+i));
  }
  return 0;
}
