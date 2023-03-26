//h
#include<iostream>
#include<vector>
using std::string; 
using std::vector;

class TicTacToe
{
public:
    void display_board() const;
    void start_game(string player);
    bool game_over();
    string get_player() const;
    void mark_board(int position);
private:
    bool check_board_full();
    string player;
    void clear_board();
    void set_next_player();
    vector<string> pegs = vector<string>(9, " ");

};