#include<stdio.h>

int main()
{
  int array[]={12,4,15,23,21,15,16,14,19,45};
  int* arrayptr =array;
  printf("The address at element first is %p\n",&array[0]);
  printf("The address at element first is %p\n",array);
  printf("The address at element second is %p\n",&array[1]);
  printf("The address at element second is %p\n",array+1);
  // array++; it is throw error you can arrayptr++
  // arrayptr++;
  printf("The value  at element first is %d\n",*(&array[0]));
  printf("The value  at element first is %d\n",array[0]);
  printf("The value at element first is %d\n",*(array));
  printf("The value  at element second is %d\n",*(&array[1]));
  printf("The value  at element second is %d\n",*(array+1));

  return 0;
}
