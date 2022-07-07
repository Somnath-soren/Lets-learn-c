#include<stdio.h>

typedef struct Complex
{
  float real;
  float imag;
}complex;

void addnumber(complex c1,complex c2,complex* result);

int main()
{
  complex c1,c2,result;

  printf("For first number\n");
  printf("Enter real number\n");
  scanf("%f",&c1.real);
  printf("Enter the imagenary number\n");
  scanf("%f",&c1.imag);

  printf("For second number\n");
  printf("Enter real number\n");
  scanf("%f",&c2.real);
  printf("Enter imagenary numnber\n");
  scanf("%f",&c2.imag);

  addnumber(c1,c2,&result);
  printf("result real = %f\n",result.real);
  printf("Result imag = %f\n",result.imag);


  return 0;
}

void addnumber(complex c1,complex c2,complex *result)
{
  result->real = c1.real + c2.real ;
  result->imag = c1.imag + c2.imag;
}
