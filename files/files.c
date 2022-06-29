#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *ptr =NULL;

  ptr=fopen("index.txt","r+");
  // int c = fgetc(ptr);
  //
  // printf("Character I was read %c\n",c);
  // c = fgetc(ptr);
  // printf("Character I was read %c\n",c);

 // /* fgets function */
 //  char str [10];
 //  fgets(str,5,ptr);
 //  printf("String is %s\n",str);

  fputc('c',ptr);
  fputs("this is fputc",ptr);

  fclose(ptr);
  return 0;
}
// change mode to practice more
