#include<stdio.h>

int main()
{
int n,multi[10];

printf("Enter the value you want to table\n");
scanf("%d",&n);
for(int i=0;i<10;i++)
{
  multi[i]=n*(i+1);
}
for(int i=0;i<10;i++)
{
  printf("%d X %d = %d\n",n,i+1,multi[i]);
}
  return 0;
}
