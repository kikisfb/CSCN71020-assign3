/*
	Kiana Safavi Baygi
	CSCN71020-Assignment#3
	Nov, 2021

*/
#include "pch.h"
#include "CppUnitTest.h"
extern "C"
{
	char* RockPaperScissorsGame(char[], char[]);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
	TEST_CLASS(RockPaperScissorsTests)
	{
	public:
		
		TEST_METHOD(RockPaperScissorsGame_RockAndRock_DrawTest)
		{
			//testing the output of inputs Rock and Rock
			char* result = RockPaperScissorsGame("Rock", "Rock");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(RockPaperScissorsGame_RockAndPaper_Player2WinningTest)
		{
			//testing the output of inputs Rock and Paper
			char* result = RockPaperScissorsGame("Rock", "Paper");
			Assert::AreEqual("Player 2", result);
		}
		TEST_METHOD(RockPaperScissorsGame_RockAndScissors_Player1WinningTest)
		{
			//testing the output of inputs Rock and Scissors
			char* result = RockPaperScissorsGame("Rock", "Scissors");
			Assert::AreEqual("Player 1", result);
		}
		TEST_METHOD(RockPaperScissorsGame_PaperAndRock_Player1WinningTest)
		{
			//testing the output of inputs Paper and Rock
			char* result = RockPaperScissorsGame("Paper", "Rock");
			Assert::AreEqual("Player 1", result);
		}
		TEST_METHOD(RockPaperScissorsGame_PaperAndPaper_DrawTest)
		{
			//testing the output of inputs Paper and Paper
			char* result = RockPaperScissorsGame("Paper", "Paper");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(RockPaperScissorsGame_PaperAndScissors_Player1WinningTest)
		{
			//testing the output of inputs Paper and Scisssors
			char* result = RockPaperScissorsGame("Paper", "Scissors");
			Assert::AreEqual("Player 2", result);
		}
		TEST_METHOD(RockPaperScissorsGame_ScissorsAndPaper_Player1WinningTest)
		{
			//testing the output of inputs Scissors and Paper
			char* result = RockPaperScissorsGame("Scissors", "Paper");
			Assert::AreEqual("Player 1", result);
		}
		TEST_METHOD(RockPaperScissorsGame_ScissorsAndScissors_DrawTest)
		{
			//testing the output of inputs Scissors and Scissors
			char* result = RockPaperScissorsGame("Scissors", "Scissors");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(RockPaperScissorsGame_ScissorsAndRock_Player2WinningTest)
		{
			//testing the output of inputs Scissors and Rock
			char* result = RockPaperScissorsGame("Scissors", "Rock");
			Assert::AreEqual("Player 2", result);
		}

		TEST_METHOD(RockPaperScissorsGame_NotCapitalTirstLetters_InvalidInputTest)
		{
			//testing the output of inputs paper and rock
			char* result = RockPaperScissorsGame("paper", "rock");
			Assert::AreEqual("Invalid", result);
		}
		TEST_METHOD(RockPaperScissorsGame_AllCapitalLetters_InvalidInputTest)
		{
			//testing the output of inputs ROCK and SCISSORS
			char* result = RockPaperScissorsGame("ROCK", "SCISSORS");
			Assert::AreEqual("Invalid", result);
		}
		TEST_METHOD(RockPaperScissorsGame_RandomLettersInput_InvalidInputTest)
		{
			//testing the output of inputs hi and hey
			char* result = RockPaperScissorsGame("hey", "hi");
			Assert::AreEqual("Invalid", result);
		}
		TEST_METHOD(RockPaperScissorsGame_RandomNumbersInput_InvalidInputTest)
		{
			//testing the output of inputs 123 and 456
			char* result = RockPaperScissorsGame("123", "456");
			Assert::AreEqual("Invalid", result);
		}
		
	};
}
