//WAP for Tic_Tac_Toe Game using C Programming language.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int player_input(char *arr, int ii);
int board_display(char *darr);
int winner(char arr[9], int I);
void main()
{
 char board[9] = "123456789";
 int w=0;
    for (int i = 0; i < 9; i++)
    {
        system("cls");
        printf("Tic Tac Toe Game \nPlayer 1: X  || Player 2: O\n");
        board_display(&board);
        player_input(&board, i);
        w = winner(board,i);
        if(w==1)
        {
            system("cls");
            printf("Tic Tac Toe Game \nPlayer 1: X  || Player 2: O\n");
            board_display(&board);
            printf("Player %d Won!\n",(i%2)+1);
            break;
        }
    }
}
int board_display(char *darr)
{
    for (int i = 0; i < 9; i++)
    {
        printf("|%c|",*(darr+i));
        if(i==2||i==5)
        {
            printf("\n");
        }
    }
    printf("\n");
}
int player_input(char *arr, int ii)
{
int num;
printf("Player %d Move [1-9]: ",(ii%2)+1);
scanf("%d",&num);
    if(num>9||num<1 || *(arr+num-1)=='X'|| *(arr+num-1)=='O')
    {
         printf("Warning: Invalid Move.\n");
         player_input(arr,ii);
    }
    else if (ii%2==0) { *(arr+num-1) = 'X'; }
    else { *(arr+num-1) = 'O'; } 
}
int winner(char arr[9], int I)
{
char c;
if(I%2==0) {c='X';}
if(I%2==1) {c='O';}
if(arr[0]==c && arr[1]==c && c==arr[2] || arr[3]==c && arr[4]==c && c==arr[5] || arr[6]==c && arr[7]==c&&c==arr[8]){return 1;}
if(arr[0]==c && arr[3]==c && c==arr[6] || arr[1]==c && arr[4]==c && c==arr[7] || arr[2]==c && arr[5]==c && c==arr[8]){return 1;}
if(arr[0]==c && arr[4]==c && c==arr[8] || arr[2]==c && arr[4]==c && c==arr[6] ){return 1;}
else { printf("No Result.\n");}
}