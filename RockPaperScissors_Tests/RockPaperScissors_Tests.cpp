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
			char* result = RockPaperScissorsGame("Rock", "Rock");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(RockPaperScissorsGame_RockAndPaper_Player2WinningTest)
		{
			char* result = RockPaperScissorsGame("Rock", "Paper");
			Assert::AreEqual("Player 2", result);
		}
		TEST_METHOD(RockPaperScissorsGame_RockAndScissors_Player1WinningTest)
		{
			char* result = RockPaperScissorsGame("Rock", "Scissors");
			Assert::AreEqual("Player 1", result);
		}
		TEST_METHOD(RockPaperScissorsGame_PaperAndRock_Player1WinningTest)
		{
			char* result = RockPaperScissorsGame("Paper", "Rock");
			Assert::AreEqual("Player 1", result);
		}
		TEST_METHOD(RockPaperScissorsGame_PaperAndPaper_DrawTest)
		{
			char* result = RockPaperScissorsGame("Paper", "Paper");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(RockPaperScissorsGame_PaperAndScissors_Player1WinningTest)
		{
			char* result = RockPaperScissorsGame("Paper", "Scissors");
			Assert::AreEqual("Player 2", result);
		}
		TEST_METHOD(RockPaperScissorsGame_ScissorsAndPaper_Player1WinningTest)
		{
			char* result = RockPaperScissorsGame("Scissors", "Paper");
			Assert::AreEqual("Player  1", result);
		}
		TEST_METHOD(RockPaperScissorsGame_ScissorsAndScissors_DrawTest)
		{
			char* result = RockPaperScissorsGame("Scissors", "Scissors");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(RockPaperScissorsGame_ScissorsAndRock_Player2WinningTest)
		{
			char* result = RockPaperScissorsGame("Scissors", "Rock");
			Assert::AreEqual("Player 2", result);
		}

		TEST_METHOD(RockPaperScissorsGame_NotCapitalTirstLetters_InvalidInputTest)
		{
			char* result = RockPaperScissorsGame("paper", "rock");
			Assert::AreEqual("Invalid", result);
		}
		TEST_METHOD(RockPaperScissorsGame_AllCapitalLetters_InvalidInputTest)
		{
			char* result = RockPaperScissorsGame("ROCK", "SCISSORS");
			Assert::AreEqual("Invalid", result);
		}TEST_METHOD(RockPaperScissorsGame_RandomLettersInput_InvalidInputTest)
		{
			char* result = RockPaperScissorsGame("hey", "hi");
			Assert::AreEqual("Invalid", result);
		}TEST_METHOD(RockPaperScissorsGame_RandomNumbersInput_InvalidInputTest)
		{
			char* result = RockPaperScissorsGame("123", "456");
			Assert::AreEqual("Invalid", result);
		}
		
	};
}
