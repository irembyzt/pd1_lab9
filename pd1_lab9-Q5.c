#include <stdio.h>

/*Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]*/

int main()

{  
    float x, sum, degree;

    int i, n; 

    printf("Input the value of x :");
    scanf("%f", &x); 

    printf("Input number of terms : ");
    scanf("%d", &n); 

    sum = 1; 

    degree = 1;
    
    for (i = 1; i < n; i++) 

    {
        degree = degree * x / (float)i; 

        sum = sum + degree; 
    }

    printf("\nThe sum is : %f\n", sum);

    return 0;
}