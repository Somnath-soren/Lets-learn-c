#include<stdio.h>


//string is one dimension array terminate by 0
int main()
{
  char greeting[6]={'H','e','l','l','o','\0'};

  // printf("Greeting message : %s\n",greeting);
  char *ptr=greeting;
  while (*ptr!='\0') {
    printf("%c",*ptr);
    *ptr++;
  }
  printf("\n");

  return 0;
}

/* two method to create string *ptr,ptr[] in
second method we cannot reinitilized */
/* i.e ptr = new name */
