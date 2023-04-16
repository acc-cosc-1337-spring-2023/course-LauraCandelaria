#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);

	#include <iostream>
using std::cout; 
using std::cin;

#include <memory>
using std::unique_ptr; 
using std::make_unique;


}
/*
TEST_CASE("Verify game over")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}


TEST_CASE("Verify game over - win by first column")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - win by second column")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - win by third column")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - win by first row")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - win by second row")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - win by third row")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - diagonal from top left")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify game over - diagonal from bottom left")
{
	TicTacToe game;
	auto first_player = "X";
	game.start_game(first_player);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Verify get player set to X")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");

}

TEST_CASE("Verify get player set to O")
{
	TicTacToe game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");

}
*/

