#include<stdio.h>
#include<math.h>

//Find area of the sqaure

int main()
{
  int side;
  printf("Enter the lenght of one side of sqaure\n");
  scanf("%d",&side);
  printf("Area of sqaure is :%f\n",pow(side,2));
  return 0;
}
// Error in this program dont know why
//compile the file with -lm in end 
