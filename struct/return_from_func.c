#include<stdio.h>

struct Student
{
  char name[50];
  int age;
};

struct Student getInformation();

int main()
{
  struct Student s;

  s=getInformation();
  printf("Displaying Information\n");
  printf("Name = %s\n",s.name);
  printf("Age = %d\n",s.age);

  return 0;
}
struct Student getInformation()
{
  struct Student s1;

  printf("Enter your name\n");
  scanf("%[^\n]%*c",s1.name);

  printf("Enter your age\n");
  scanf("%d",&s1.age);
  return s1;
}
