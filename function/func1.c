#include<stdio.h>

int calling()
{
  int i;
  printf("Enter the number\n");
  scanf("%d",&i);
  return i;
}
int main()
{
  int c;
  c= calling();
  printf("You enter %d\n",c);
  return 0;
}

// without argument with return value
