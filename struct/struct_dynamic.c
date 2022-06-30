#include<stdio.h>
#include <stdlib.h>

struct Student
{
  char name[40];
  int age;
};

int main()
{
  struct Student *ptr;
  int i,n;

  printf("Enter the number of person\n");
  scanf("%d",&n);

  ptr=(struct Student*)malloc(n*sizeof(struct Student));
  for(i=0;i<n;i++)
  {
    printf("Enter the name and age respecitvely\n");
    scanf("%s %d",ptr->name,&ptr->age);
  }
  for(i=0;i<n;i++)
  {
    printf("Name : %s and Age = %d\n",ptr->name,ptr->age);
  }
  return 0;
}
