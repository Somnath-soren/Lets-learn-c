#include<stdio.h>

union pointers
{
  int num;
  char a;
};
int main()
{

  union pointers P1;
  P1.num = 75;
 // p2 is a pointer to union p1
  union pointers* P2= &P1;
 // Accessing union members using pointer
  printf("%d %c \n",P2->num,P2->a);
  return 0;

}
