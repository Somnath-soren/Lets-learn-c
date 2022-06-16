#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//
int main()
{
  int number;
//   // int n=5;
  srand(time(0)); /*intialize the random num generator*/
  number = rand()%100+1;
//
//   /* print random number 0 to 55 */
//   // for(int i=0;i<n;i++)
//   // {
//   //   printf("%d\n",rand()%56);
//   // }
  printf("The number is %d\n",number);
  return 0;
}
