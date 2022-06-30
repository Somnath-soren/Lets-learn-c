#include<stdio.h>

struct Student
{
  char name[40];
  int age;
};
void display(struct Student s1);

int main()
{
  struct Student s;

  printf("Enter the name of student\n");
  scanf("%[^\n]*c",s.name);

  printf("Enter age of Student\n");
  scanf("%d",&s.age);
  display(s);
  return 0;
}
void display(struct Student s1)
{
  printf("Displaying Information\n");
  printf("Student name = %s\n",s1.name);
  printf("Student age = %d\n",s1.age);
}
