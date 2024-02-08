//WAP To Find Sum Of N Numbers.
#include<stdio.h>
int sum_num(int num);
void main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    printf("Total Sum: %d",sum_num(n));
}
int sum_num(int num)
{
    if(num<=0)
    {
        return 0;
    }
    return num+sum_num(num-1);
}
/*
OUTPUT:
Enter A Number: 5
Total Sum: 15
*/