#include<stdio.h>
#include<math.h>

// int IsPrime(int n)
// {
//     int i;
//     for(i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
int main()
{
    int num1,num2,i;
    int prime,inum;

    printf("Enter the num1\n");
    scanf("%d",&num1);
    printf("Enter the num2 range \n");
    scanf("%d",&num2);

    printf("Prime number between %d and %d are: ",num1,num2);


    for(i=num1;i<=num2;i++)
    {
        prime=1;
        // inum = sqrt(i);
        inum = i/2;
        for(int j=2;j<inum;j++)
        {

            if(i%j==0)
            {
                prime=0;
                break;
            }

        }
        if(prime)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}
