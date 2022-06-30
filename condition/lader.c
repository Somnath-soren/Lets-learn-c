#include<stdio.h>

int main()
{
  char x;
  printf("Enter the Character\n");
  scanf("%c",&x);

  if(x>'A' && x<'Z')

  printf("Uppercase Alphabet\n");
   else if(x>'a' && x<'z')
  printf("Lowercase Alphabet\n");
  else if(x>=0 && x<=9)
  printf("Numeric value \n");
  else
  printf("Special Character\n");
  return 0;
}
