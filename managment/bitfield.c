#include<stdio.h>

struct Student
{
  char name[10];
  int age:4;
};
int main()
{
  struct Student s1,s2;

  printf("Size of s1 is :%ld\n",sizeof(s1));
    printf("Size of s1 is :%ld\n",sizeof(s2));

  return 0;
}
