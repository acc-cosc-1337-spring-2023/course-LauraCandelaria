#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
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


    }

    return column_win;
    
}



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe3::check_row_win()
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



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool TicTacToe3::check_diagonal_win()
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
