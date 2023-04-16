//h
#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H

#include"tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<string>

#include<memory>
using std::unique_ptr; 
using std::make_unique;

class TicTacToeManager
{
    friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
    
    public:
    // void save_game(TicTacToe game);
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& w, int& t);
    
    private:
    // vector<TicTacToe> games ;
    vector<unique_ptr<TicTacToe>> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(string winner);
};

#endif