//WAP To Find ArmStrong Number.
#include<stdio.h>
#include<math.h>
void main()
{
    int n,rem,temp,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    int x = printf("%d ",n);
    temp = n;
    while (n>0)
    {
        rem = n%10;
        sum = sum + pow(rem,x-1);
        n = n/10;
    }
    (temp==sum)?(printf("Is An ArmStrong Number")):(printf("Is Not An ArmStrong Number"));
}
/*
OUTPUT:
Enter a Number: 371
371 Is An ArmStrong Number
*/