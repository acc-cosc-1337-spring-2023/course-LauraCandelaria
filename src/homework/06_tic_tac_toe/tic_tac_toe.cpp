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
    this->set_next_player();
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

/*
void TicTacToe::display_board() const
{
    std::cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
    std::cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
    std::cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";
}
*/

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
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
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

std::ostream& operator<<(std::ostream& out, const TicTacToe& game) 
{
    if(game.pegs.size() == 9)
    {
        out<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"\n";
        out<<game.pegs[3]<<"|"<<game.pegs[4]<<"|"<<game.pegs[5]<<"\n";
        out<<game.pegs[6]<<"|"<<game.pegs[7]<<"|"<<game.pegs[8]<<"\n";
    }
    else if(game.pegs.size() == 16)
    {
        out<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"|"<<game.pegs[3]<<"\n";
        out<<game.pegs[4]<<"|"<<game.pegs[5]<<"|"<<game.pegs[6]<<"|"<<game.pegs[7]<<"\n";
        out<<game.pegs[8]<<"|"<<game.pegs[9]<<"|"<<game.pegs[10]<<"|"<<game.pegs[11]<<"\n";
        out<<game.pegs[12]<<"|"<<game.pegs[13]<<"|"<<game.pegs[14]<<"|"<<game.pegs[15]<<"\n";  
    }

    return out;

}

std::istream& operator>>(std::istream& in, TicTacToe& game) 
{
    int position;

    if(game.pegs.size() == 9)
    {
        in>>position;
	    game.mark_board(position);
    }

    else if(game.pegs.size() == 16)
    {
        in>>position;
	    game.mark_board(position);
    }

    return in;
}