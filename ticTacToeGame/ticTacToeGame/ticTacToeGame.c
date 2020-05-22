//Author: Adnan Paiva
//Learning C programming language
//08/04/2020

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <unistd.h> //provide pause in the program (sleep)

// fflush(stdin) = limpa o cache da memória, buffer, para variáveis do tipo char

void acentos(){
    //Permite usar acentos
    setlocale(LC_ALL,"");
}

void game(){

    char table[] = {'1','2','3','4','5','6','7','8','9'};
    int returnValue = 0;
    int choice;
    int player = 1;
    while (returnValue == 0){
        if (table[0]==table[1] && table[1]==table[2]){
            returnValue = 1;
        }
        else if (table[3]==table[4] && table[4]==table[5])
            returnValue = 1;
        else if (table[6]==table[7] && table[7]==table[8])
            returnValue = 1;
        else if (table[0]==table[3] && table[3]==table[6])
            returnValue = 1;
        else if (table[1]==table[4] && table[4]==table[7])
            returnValue = 1;
        else if (table[2]==table[5] && table[5]==table[8])
            returnValue = 1;
        else if (table[0]==table[4] && table[4]==table[8])
            returnValue = 1;
        else if (table[2]==table[4] && table[4]==table[6])
            returnValue = 1;
        else if (table[0] != '1' && table[1] != '2' && table[2] != '3' && table[3] != '4' && table[4] != '5' && table[5] != '6' && table[6] != '7' && table[7] != '8' && table[8] != '9'){
            returnValue = 0;
            printf("\n\t\t\t       Game Draw!!!");
            sleep(1);
            break;
        }
        system("clear");
        printf("\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+- The Tic Tac Toe Game -+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n\n");
        printf("\t\t\t Player 1 (X) - Player 2 (O)\n\n\n");
        printf("\t\t\t           |     |     \n");
        printf("\t\t\t        %c  |  %c  |  %c  \n", table[0], table[1], table[2]);
        printf("\t\t\t      _____|_____|_____\n");
        printf("\t\t\t           |     |     \n");
        printf("\t\t\t        %c  |  %c  |  %c  \n", table[3], table[4], table[5]);
        printf("\t\t\t      _____|_____|_____\n");
        printf("\t\t\t           |     |     \n");
        printf("\t\t\t        %c  |  %c  |  %c  \n", table[6], table[7], table[8]);
        printf("\t\t\t           |     |     \n\n\n");
        if (returnValue == 1){
            printf("\n\t\t\t       Player %i Win!!!", player);
            sleep(1);
            break;
        }
        printf("\t\t\t Player %i, enter a number: ", player);
        scanf("%i", &choice);
        if (table[choice-1] != 'X' && table[choice-1] != 'O'){ //verificarndo se o campo digitado já foi utilizado
            if (player == 1)
                table[choice-1] = 'X';
            else
                table[choice-1] = 'O';
        }
        else
            printf("\nInvalid Number\n");
        player = (player == 1) ? 2 : 1; //If player 1 change to 2. If not, change to 1.
    }
}

int main()
{
    char again = 'Y';
    while (again == 'Y' || again == 'y'){
        game();
        printf("\n\n\t\t       Do you want to play again? (Y/N) ");
        fflush(stdin);
        scanf(" %c", &again);
        //printf("\n\n\n");
    }
    printf("\n\n\t\t\t Goodbye!!! See you next Time...\n\n\n");
    return 0;
}
