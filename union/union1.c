#include<stdio.h>
#include<string.h>

union Data
{
  int i;
  float f;
  char ch[50];
};

int main()
{
  union Data data;

  data.i = 50;
  printf("The value of integer is:%d\n",data.i);

  data.f = 145.10;
  printf("The value of float is:%f\n",data.f);

  strcpy(data.ch,"C programming");
  printf("String value is : %s\n",data.ch);
  return 0;
}
