#include<stdio.h>

int main()
{
  int marks[4];
  // int marks[4]={55,65,66,48};

  for(int i=0;i<4;i++)
  {
    printf("Enter the value of %d element of the array \n",i);
    scanf("%d",&marks[i]);
  }
  for(int i=0;i<4;i++)
  {
    printf("The marks of student %d is %d\n",i,marks[i]);
  }

  // marks[0]=45;
  // marks[1]=65;
  // marks[0]=99;
  //
  // printf("The marks of student 4 is %d\n",marks[0]);
  return 0;
}
