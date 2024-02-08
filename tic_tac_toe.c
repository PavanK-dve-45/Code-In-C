//WAP for Tic_Tac_Toe Game using C Programming language.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int player_input(char *darr, int ii);
void main()
{
 char board[9] = "123456789";
 int w=0;
 for (int i = 0; i < 9; i++)
 {
    system("cls");
    board_display(&board);
    player_input(&board, i);
    w = winner(board,i);
    if(w==1)
    {
        printf("Player %d Won!\n",(i%2)+1);
        break;
    }
 }
    
}