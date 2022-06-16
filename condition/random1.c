#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int number;
  int guess,count=1;
  // int n=5;
  srand(time(0)); /*intialize the random num generator*/

  number = rand()%100+1;

  do{
    printf("Guess the number between 1 to 100\n");
    scanf("%d",&guess);

    if(number>guess)
    {
      printf("Higher number please\n");
    }
    else if(number<guess)
    {
      printf("Lower number please\n");
    }
    else
    {
      printf("You are guess %d attempt\n",count);
    }
    count++;

  }while(guess!=number);

return 0;
}
