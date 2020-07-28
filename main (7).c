/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int checkforprime(int);
int i;
int main()
{
    int n,primeno;
    printf("\n\n to check a number is prime number or not:\n");
    printf("input any positive number");
    scanf("%d",&n);
    i=n/2;
    primeno=checkforprime(n);
    if(primeno==1)
            printf("the number %d is a prime number \n\n",n);
    else
            printf("the number %d is not a prime number \n\n",n);
    return 0;
}
int checkforprime(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
        return 0;
    }
    else
    {
        i=i-1;
        checkforprime(n);
    }
}
