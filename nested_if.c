#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age\n");
  scanf("%d" , &age); // note use /n extra new line add
  if(age<18)
  {
    printf("You are minor\n");
    printf("You are not eligible for work\n");
  }
  else
  {
    if(age>=18 && age<60)
    {
      printf("You are adult\n");
      printf("You are eligible for work\n");
    }
    else
    {
    printf("You are sineior citizen\n");
    printf("PLease collect your pension\n");
    }
  }
  return 0;
}
