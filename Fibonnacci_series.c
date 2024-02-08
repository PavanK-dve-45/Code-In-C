//WAP to Display Fibonacci Series Using C Programming Language.
#include<stdio.h>
void main()
{
    int n,n1=0,n2=1,n3;
    printf("Enter Number of Fibonacci Series u want: ");
    scanf("%d",&n);
    printf("%d  %d  ",n1,n2);
    for (int i = 2; i < n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d  ",n3);
        
    }
}
/*
OUTPUT:
Enter Number of Fibonacci Series u want: 10
0  1  1  2  3  5  8  13  21  34
*/