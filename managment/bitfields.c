#include<stdio.h>
//declare typedef
typedef struct Date
{
  unsigned int d:5;
  unsigned int m:4;
  unsigned int y;
}date;
int main()
{
  date d1={22,06,2022}; // typedef is here

  printf("Size of date : %ld\n",sizeof(d1));
  return 0;
}
// it is work only struct and union
/* try define two pointer with
help of typedef */
