//WAP to find Palindrom or Not
#include<stdio.h>
#include<string.h>
void main()
{
    char name[10];
    printf("Enter Name: ");
    scanf("%s",name);
    strlwr(name);
    int n=strlen(name);
    char temp[n];
    char temp1[n];
    strcpy(temp,name);
    printf("%s\n",temp);
    strcpy(temp1,strrev(temp));
    int i=strcmp(temp1,name);
    if(i==0)
    printf("It's a palindrom\n");
    else
    printf("It's not a palindrom\n");
}
/*
OUTPUT:
Enter Name: Nayan
It's a palindrom

Enter Name: Gadag
gadag
It's a palindrom
*/