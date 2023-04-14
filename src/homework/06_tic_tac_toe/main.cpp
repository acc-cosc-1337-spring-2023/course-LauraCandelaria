#include<iostream>
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
    auto user_choice = 'n';
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    TicTacToeManager manager;
    
    do
    {
    
        
        TicTacToe game;
        string first_player = "X";
        cout<<"\nEnter an X or O: ";
        cin>>first_player;
        game.start_game(first_player);
        cout<<game;
        
        do
        {
            cout<<"\nEnter which position (1-9) you would like to mark: ";
            cin >> game;
             
            
        } while (game.game_over() == false);
        if(game.game_over() == true)
        {

            manager.save_game(game);
            manager.get_winner_total(o_win, x_win, ties);

            cout<<"The winner is: "<<game.get_winner()<<"\n\n";
            cout<<"****************************\n";
            cout<<"Total wins - \nPlayer X: "<<x_win<<"\n";
            cout<<"Player O: "<<o_win<<"\n"<<"Ties: "<<ties<<"\n\n";
            cout<<"****************************\n\n";
            cout<<"Game Over. Want to play again? (y or n)";
            cin>>user_choice;
        }

    } while (user_choice == 'y' || user_choice == 'Y');
    
    return 0;
}


