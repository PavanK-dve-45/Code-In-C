//WAP For Matrix Multiplication.
#include<stdio.h>
void main()
{
    int row1,row2,col1,col2;
    printf("Enter Row's and Column's for Matrix 1: \n");
    scanf("%d%d",&row1,&col1);
    printf("Enter Row's and Column's for Matrix 2: \n");
    scanf("%d%d",&row2,&col2);
    if (col1==row2)
    {
        int matx1[row1][col1];
        printf("Enter %d Elements to Matrix 1 : \n",row1*col1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d",&matx1[i][j]);
            }
        }
        int matx2[row2][col2];
        printf("Enter %d Elements to Matrix 2 : \n",row2*col2);
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d",&matx2[i][j]);
            }
        }
        int matx3[row1][col2];
        printf("Product of Matrix 1 and Matrix 2 :\n");
        int sum=0;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    sum+=matx1[i][k]*matx2[k][j];
                }
                matx3[i][j]=sum;
                printf("%d ",matx3[i][j]);
                sum=0;
            }
            printf("\n");
        }
    }
}
/*
OUTPUT:
Enter Row's and Column's for Matrix 1: 
2 4
Enter Row's and Column's for Matrix 2: 
4 3
Enter 8 Elements to Matrix 1 : 
4 2 6 7
2 9 6 7
Enter 12 Elements to Matrix 2 : 
4 2 6
1 2 7
3 4 8
1 4 6
Product of Matrix 1 and Matrix 2 :
43 64 128 
42 74 165 
*/