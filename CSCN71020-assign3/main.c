
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define MAXNUMOFCHARS 20

char* RockPaperScissorsGame(char[], char[]);

int main(void) {

	char player1Input[MAXNUMOFCHARS];
	char player2Input[MAXNUMOFCHARS];
	printf("Player1\n Please enter Rock, Paper or Scissor(first letter must be capital):\n");
	scanf("%s", player1Input);
	printf("Player2\n Please enter Rock, Paper or Scissor(first letter must be capital):\n");
	scanf("%s", player2Input);

	char* result=RockPaperScissorsGame(player1Input,player2Input);
	printf("\nThe result is: %s\n", result);
	return 0;
}

char* RockPaperScissorsGame(char firstInput[], char secondInput[])
{
	static char result[MAXNUMOFCHARS] ;
	char Rock[] = "Rock";
	char Paper[] = "Paper";
	char Scissors[] = "Scissors";
	char Draw[] = "Draw";
	char Player1[] = "Player 1";
	char Player2[] = "Player 2";
	char Invalid[] = "Invalid";

	int DrawLength = strlen(Draw);
	int Player1Length = strlen(Player1);
	int Player2Length = strlen(Player2);
	int InvalidLength = strlen(Invalid);

	if (((strcmp(firstInput, Rock) == 0 && strcmp(secondInput, Rock) == 0)) || ((strcmp(firstInput, Paper) == 0 && strcmp(secondInput, Paper) == 0)) || ((strcmp(firstInput, Scissors) == 0 && strcmp(secondInput, Scissors) == 0)))
	{
		for (int i = 0; i < DrawLength; i++)
		{
			result[i] = Draw[i];
		}
		
	}
	else if (((strcmp(firstInput, Rock) == 0 && strcmp(secondInput, Paper) == 0)) || ((strcmp(firstInput, Paper) == 0 && strcmp(secondInput, Scissors) == 0)) || ((strcmp(firstInput, Scissors) == 0 && strcmp(secondInput, Rock) == 0)))
	{
		for (int i = 0; i < Player2Length; i++)
		{
			result[i] = Player2[i];
		}
	}
	else if (((strcmp(firstInput, Rock) == 0 && strcmp(secondInput, Scissors) == 0)) || ((strcmp(firstInput, Paper) == 0 && strcmp(secondInput, Rock) == 0)) || ((strcmp(firstInput, Scissors) == 0 && strcmp(secondInput, Paper) == 0)))
	{
		for (int i = 0; i < Player1Length; i++)
		{
			result[i] = Player1[i];
		}
	}
	else
	{
		for (int i = 0; i < InvalidLength; i++)
		{
			result[i] = Invalid[i];
		}
	}
	return result;
	
}



