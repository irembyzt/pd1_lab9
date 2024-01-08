#include <stdio.h>

/*Write a C program to find the largest of three numbers A, B, and C given from keyboard*/

int main()
{
    int num1,num2,num3;

    printf("enter number A: ");
    scanf("%d",&num1);

    printf("enter number B: ");
    scanf("%d",&num2);

    printf("enter number C: ");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
        printf("number A is the largest");

    }

    else if (num2>num3 && num2>num1)
    {
        printf("number B is the largest");

    }

    else 
    {
        printf ("number C is the largest");

    }

    return 0;
}