// without argument without return
#include<stdio.h>
void hello();
void hi();
int main()
{
  hello();
  hi();
  return 0;
}

void hello()
{
  printf("Hello THere\n");
}
void hi()
{
  printf("Bye World\n");
}
