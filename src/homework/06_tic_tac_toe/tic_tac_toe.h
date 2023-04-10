//h

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<iostream>
#include<vector>
using std::string; 
using std::vector;



class TicTacToe
{
public:
//    void display_board() const;
    void start_game(string player);
    bool game_over();
    string get_player() const;
    void mark_board(int position);
    string get_winner();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
private:
    bool check_board_full();
    string player;
    void clear_board();
    void set_next_player();
    vector<string> pegs = vector<string>(9, " ");
    void set_winner();
    string winner;


    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

};

#endif