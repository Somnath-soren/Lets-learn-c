#include <stdio.h>
#define ROWS 5
int *fn_input(){
  static int   intArr[ROWS];
  int i;
  // Requests users to enter the value for elements
  for (i = 0; i< ROWS; i++) {
    printf("Enter the value for array intArr[%d]:", i);
    scanf("%d", &intArr[i]);
  }
  return intArr; // return array pointer
}
int main()
{
  int *intPtr;
  int i;
  intPtr = fn_input(); // accepts the pointer to an array
  printf("\nArray Elements are:\n");
  for (i = 0; i< ROWS; i++)
    printf("%d\t", *(intPtr + i)); // displays the values as if it is accessing the array itself
  return 0;
}
/* please create a program without using pointer*/
