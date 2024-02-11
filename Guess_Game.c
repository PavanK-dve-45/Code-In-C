//Guess Game Using C Programming Language.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Guess(int n, int cnt);

void main()
{
    int num,count=3,x;
    srand(time(NULL));
    num=rand()%10;
    system("cls");
    x=Guess(num,count);
    (x==1)?(printf("Your Guess is Correct.\n")):
    (printf("Actual Value: %d\nSorry, You Lost the Match\n",num));
}

int Guess(int n,int cnt)
{
    int m=0;
    if(cnt==0)
    {
        return 0;
    }
    printf("You have %d Attempt's Left\n",cnt);
    printf("Guess My Number [0-9]:");
    scanf("%d",&m);
    if(m>9||m<0)
    {
        printf("Invalid Input.\n");
        Guess(n,cnt);
    }
    if(m==n)
    {
        return 1;
    }
    else if(m>n)
    {
        printf("Your Value is Greater than Actual Value.\n");
        printf("\n");
        cnt--;
        Guess(n,cnt);
    }
    else if(m<n)
    {
        printf("Your Value is Lesser than Actual Value.\n");
        printf("\n");
        cnt--;
        Guess(n,cnt);
    }
}