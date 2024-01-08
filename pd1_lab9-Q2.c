#include <stdio.h>

/*Write a C program for computing factorial N (N!)*/

int main()
{
    int i,n;
    int fac=1;

    printf("enter a number: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)

    {
        fac=fac*i;
    }

        printf("the factoriyel of the entered number: %d",fac);
    
    return 0;

}