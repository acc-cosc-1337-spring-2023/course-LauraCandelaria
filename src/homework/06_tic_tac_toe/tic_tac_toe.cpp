//cpp

#include"tic_tac_toe.h"
using std::cout;
using std::cin;

bool TicTacToe::game_over()
{
    return check_board_full();
}

bool TicTacToe::check_board_full()
{
    bool is_board_full = false; 
    for(unsigned int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            is_board_full = false;
        }
        else
        {
            is_board_full = true;
        }
    }
    return is_board_full;
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::clear_board()
{
    for(unsigned int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

void TicTacToe::display_board() const
{
    std::cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
    std::cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
    std::cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";
}

