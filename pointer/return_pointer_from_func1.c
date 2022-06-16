#include<stdio.h>

int *ReturnMarks();
// int marks[]={70,87,80,90,65,86,92,99,94,66};
int main()
{
  int *marks;
  int i;
  marks = ReturnMarks();
  for(i=0;i<10;i++)
  {
    printf("%d\n",marks[i]);
  }
  return 0;
}
int *ReturnMarks()
{
  static int marks[]={70,87,80,90,65,86,92,99,94,66};
  return marks;
}
