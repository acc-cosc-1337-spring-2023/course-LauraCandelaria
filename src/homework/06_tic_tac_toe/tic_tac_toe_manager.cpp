//cpp


#include"tic_tac_toe_manager.h"
#include<iostream>

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b) {
  update_winner_count(b ->get_winner());
  games.push_back(std::move(b)); 
}


void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;

}
    
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  for (auto& item: manager.games) 
  {
    out<< *item << "\n";
  }
  return out;
}
    



void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }

}