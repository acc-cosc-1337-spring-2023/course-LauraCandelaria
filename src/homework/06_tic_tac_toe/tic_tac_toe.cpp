//cpp

#include"tic_tac_toe.h"
using std::cout;
using std::cin;


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


bool TicTacToe::check_board_full()
{
    bool is_board_full = true; 
    for(unsigned int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            is_board_full = false;
        }
      
    }
    return is_board_full;
}

bool TicTacToe::check_column_win()
{
    
    bool column_win = false;
    for(unsigned int i = 0; i < 9; i++)
    {
        if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
        {
            column_win =  true;
        }

        if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
        {
            column_win =  true;
        }

        if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
        {
            column_win =  true;
        }

        if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
        {
            column_win =  true;
        }

        if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
        {
            column_win =  true;
        }

        if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
        {
            column_win =  true;
        }

    }

    return column_win;
    
}

bool TicTacToe::check_row_win()
{
    
    bool row_win = false;
    for(unsigned int i = 0; i < 9; i++)
    {
        if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
        {
            row_win =  true;
        }

        if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
        {
            row_win =  true;
        }

        if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
        {
            row_win =  true;
        }

        if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
        {
            row_win =  true;
        }

        if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
        {
            row_win =  true;
        }

        if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
        {
            row_win =  true;
        }
    }

    return row_win;
    
}

bool TicTacToe::check_diagonal_win()
{
    
    bool diagonal_win = false;
    for(unsigned int i = 0; i < 9; i++)
    {
        if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
        {
            diagonal_win =  true;
        }

        if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
        {
            diagonal_win =  true;
        }

        if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
        {
            diagonal_win =  true;
        }

        if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
        {
            diagonal_win =  true;
        }
    }

    return diagonal_win;
    
}

void TicTacToe::set_winner()
{
    TicTacToe::get_player();
    if(player == "X")
    {
        winner = "O";
    }
    if(player == "O")
    {
        winner = "X";
    }
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::game_over()
{   
    bool is_game_over;
    if(TicTacToe::check_column_win() == true || TicTacToe::check_row_win() == true
    || TicTacToe::check_diagonal_win() == true)
    {
        TicTacToe::set_winner();
        is_game_over = true;
    }
    if(TicTacToe::check_board_full() == true)
    {
        winner = "C";
        is_game_over = true;
    }
    
    return is_game_over;
    
}

