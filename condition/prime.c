#include<stdio.h>

int main()
{
  int no;
  printf("Enter the number to check prime\n");
  scanf("%d",&no);
  int i,temp=0;

  for(i=2;i*i<=no;i++)
  {
    if(no%i==0)
    {
      temp=temp+1;
    }
  }
  if(temp>0)
  {
    printf("Number is not prime\n");
  }
  else
  {
    printf("Number is prime\n");
  }
  return 0;
}
