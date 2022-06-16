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

  data.i = 10;
  data.f = 25.24;
  strcpy(data.ch,"C programming");

  printf("integer value is : %d\n",data.i);
  printf("float value is : %f\n",data.f);
  printf("char value is : %s\n",data.ch);
  return 0;
}
// NEXT solve program is union1.:
