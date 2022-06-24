#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Make a pointer in same function*/
int* randoms()
{
    static int num[10];

      srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        num[i] = rand()%150+1;
    printf("%d\n",num[i]);
    }
    return num;
}
int main()
{
    int *num;
    num=randoms();
    for(int i=0;i<10;i++)
    {
        printf("random value %d position is %d\n",i,*(num+i));
    }
    return 0;
}
