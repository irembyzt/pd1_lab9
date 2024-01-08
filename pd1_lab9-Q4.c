#include <stdio.h>

/*Write a C program to check whether a given number from keyboard is Palindrome number or not*/

int main()

{
    int num,a,b;
    int t=0;

    printf("enter a number: ");
    scanf("%d",&num);

    a=num;

    while (num!=0)
    {
        b= num % 10;

        t= t * 10 + b;

        num=num / 10;

    }

    if (a==t)

    {
        printf ("number %d is Palindrome number",a);
    }
    
    else 

    {
        printf ("number %d is not a Palindrome number",a);
    }

    return 0;

}