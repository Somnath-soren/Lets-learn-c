#include<stdio.h>
int main()
{
  int a=32;
  int* ptra = &a;
  printf(" The value of a is %d\n",*ptra);
  printf(" The value of a is %d\n",a);
 // printf(" The value of a is %x\n",ptra); format expecifier
 printf(" %p\n",&a);
 printf(" %p\n",&ptra);
 printf(" %p\n",ptra);
 printf(" %p\n",ptra+1);
  return 0;
}

// NEXT WILL BE CALL BY VALUE AND CALL BY REFRENCE
// variable which stores the address of another variable i.e char array function
// pointer in c can be declare using *(asterisk symbol)
// & is store a store of another address
// * is derefrence to value of point address
