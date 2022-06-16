#include<stdio.h>

int main()
{
  char ch;
  float input;
  float result;
  do
  {
    printf("please select an option to given value\n");
    printf("a) for Kilogram to Pound\n");
    printf("b) for Celsius to Fahenhiet\n");
    printf("c) for Foot to Centimeter\n");
    printf("d) for Kilometer to Miles\n");
    printf("Press q to quit\n");
    scanf("%c",&ch);
    switch(ch)
    {
      case 'a':
      printf("Please enter to value of Kilogram\n");
      scanf("%f",&input);
      result = 2.204 * input;
      printf("Your result is %0.2f pound\n",result);
      break;

      case 'b':
      printf("Please enter to value of Celsius\n");
      scanf("%f",&input);
      result = (9.0/5.0) * input + 32;
      printf("Your result is %0.2f Farenhiet\n",result);
      break;

      case 'c':
      printf("Please enter to value of Foot\n");
      scanf("%f",&input);
      result = 30.48 * input;
      printf("Your result is %0.2f Centimeter\n",result);
      break;

      case 'd':
      printf("Please enter to value of Kilometer\n");
      scanf("%f",&input);
      result = (0.6213 ) * input ;
      printf("Your result is %0.2f Miles\n",result);
      break;

      default:
      break;
    }
  }
  while (ch!='q'); // if use == program run one execute

  return 0;
}
