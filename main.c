//https://www.youtube.com/watch?v=gSitgqAJn_I&t=1242s
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
int spotss[] = {0,1,0,0,0,0,0,0,0};
char spots[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
void drawBoard();

int checkWin();

int main() {

    int player = 1, i = -1, choice;
    char mark; //X,O

    do{
        drawBoard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter the choice: ", player);
        scanf("%d",&choice);
        mark = (player == 1) ? 'X' : 'Y';
        if(choice == 0 && spots[0] == '0'){
            spots[0] = mark;
        }else if(choice == 1 && spots[1] == '1'){
            spots[1] = mark;
        }else if(choice == 2 && spots[2] == '2'){
            spots[2] = mark;
        }else if(choice == 3 && spots[3] == '3'){
            spots[3] = mark;
        }else if(choice == 4 && spots[4] == '4'){
            spots[4] = mark;
        }else if(choice == 5 && spots[5] == '5'){
            spots[5] = mark;
        }else if(choice == 6 && spots[6] == '6'){
            spots[6] = mark;
        }else if(choice == 7 && spots[7] == '7'){
            spots[7] = mark;
        }else if(choice == 8 && spots[8] == '8'){
            spots[8] = mark;
        }else{
            printf("INVALID OPTION!");
            player--;
            getch();
        }
        i = checkWin();
        player++;

    }while(i == -1);
    drawBoard();
    if(i==1){
        printf("==>Player %d won",--player);

    }else{
        printf("==>Game Draw");
    }
    getch();
    return 0;
}



int checkWin(){
    //horizontal checks
    if (spots[0] == spots[1] && spots[1] == spots[2]){
        return 1;
    }
    if(spots[3] == spots[4] && spots[4] == spots[5]){
        return 1;
    }
    if(spots[6] == spots[7] && spots[7] == spots[8]){
        return 1;
    }
    //vertical checks
    if(spots[0] == spots[3] && spots[3] == spots[6]){
        return 1;
    }
    if(spots[1] == spots[4] && spots[4] == spots[7]){
        return 1;
    }
    if (spots[2] == spots[5] && spots[5] == spots[8]){
        return 1;
    }
    //diagonal checks
    if(spots[0] == spots[4] && spots[4] == 8){
        return 1;
    }
    if(spots[2] == spots[4] && spots[4] == spots[6]){
        return 1;
    }
    if(spots[0] != '0' && spots[1] != '1' && spots[2] != '2' && spots[3] != '3' && spots[4] != '4' && spots[5] != '5' && spots[6] != '6' & spots[7] != '7' && spots[8] != '8'){
        return 0;
    }
    return -1;

}

void drawBoard(){
    system("cls");
    printf("\n\n\t Tic Tac Toe \n\n\n");
    printf("Player1 (X) - Player2 (Y) \n\n\n");
    printf("     |     |   \n" );
    printf("  %c  |  %c  |  %c  \n", spots[0], spots[1], spots[2]);
    printf("_____|_____|_____ \n");
    printf("     |     |   \n" );
    printf("  %c  |  %c  |  %c  \n", spots[3], spots[4], spots[5]);
    printf("_____|_____|_____ \n");
    printf("     |     |   \n" );
    printf("  %c  |  %c  |  %c  \n", spots[6], spots[7], spots[8]);
}