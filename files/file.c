#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE* ptr = NULL;

  char string[74] = {"this my string in file functions"};
  // ptr = fopen("index.txt","r");
  // fscanf(ptr,"%s",string);
  // printf("Content of this file is %s\n",string);

   ptr = fopen("index.txt","w");
   fprintf(ptr,"%s\n",string);
   // printf("This my file Content %s\n",string);

  return 0;

}

// try change the mode with "w'" to "a";
