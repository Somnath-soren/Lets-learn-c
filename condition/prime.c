#include<stdio.h>

int main()
{
  int n,i,ans;

  printf("Enter the number \n");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    ans=n%i;
    if(ans==0)
    {
      printf("Not a prime number\n");
      break;
    }
  }
  if(ans==1)
  printf("Number is prime number\n");
  return 0;
}
