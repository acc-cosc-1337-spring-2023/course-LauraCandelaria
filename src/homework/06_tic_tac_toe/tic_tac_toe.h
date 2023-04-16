//h

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<iostream>
#include<vector>
using std::string; 
using std::vector;



class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);

public:
//    void display_board() const;
    TicTacToe();
    TicTacToe(int size): pegs(size * size, " "){};

    void start_game(string player);
    bool game_over();
    string get_player() const;
    void mark_board(int position);
    string get_winner();

protected:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    vector<string> pegs;

private:
    string player;
    string winner;
    void clear_board();
    void set_next_player();
    void set_winner();
    bool check_board_full();
    


    

};

#endif