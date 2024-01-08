#include <stdio.h>

/*Write a C program which generates even numbers between 1000 and 2000 and then prints them*/

int main()
{
    int i;

    for (i=1000;i<=2000;i=i+2)
    {
        printf("%d\n",i);
    }

    return 0;
}