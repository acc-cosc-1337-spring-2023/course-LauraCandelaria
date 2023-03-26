#include<iostream>
#include"tic_tac_toe.h"
using std::cout;
using std::cin;

int main() 
{
    auto user_choice = 'n';
    do
    {
        TicTacToe game;
        string first_player = "X";
        cout<<"\nEnter an X or O: ";
        cin>>first_player;
        game.start_game(first_player);
        game.display_board();
        do
        {
            int position = 1;
            cout<<"\nEnter which position (1-9) you would like to mark: ";
            cin>>position;
            game.mark_board(position);
            game.display_board();
        } while (game.game_over() == false);
        if(game.game_over() == true)
        {
            cout<<"Game Over. Want to play again?";
            cin>>user_choice;
        }

    } while (user_choice == 'y' || user_choice == 'Y');
    
    return 0;
}