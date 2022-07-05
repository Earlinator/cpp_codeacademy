#include <iostream>
#include "ttt.hpp"
#include <vector>
#include <string>


int main()
{
//the introduction of the game
introduction();
//all the declarations with definitions
std::vector<std::string> board = {"0", "1", "2", "3", "4", "5", "6", "7", "8"};
std::string x = "X";
std::string o = "O";
int input = 0;
int player = 1;
int i = 0;
bool game_done = false;
bool win1 = false;
bool win2 = false;
int c = 0;
//first board which is declared and defined on other .hpp and .cpp respectively
board1();
//while loop to keep game going until someone wins, or it ends in a tie or cat
  while(game_done == false) {
    //for that only repeats once every turn
    for(int i = input; i == input; i++){
    //outputs a phrase for which player's turn it is and adds a place for them to input it
    std::cout << "\nPlayer " << player << " enter a number\n";
    std::cin >> input;
    //inputs player 1
    if(player == 1) {
        //checks to see if that spot has already been taken by a number, the same line is in front of player 2
        if(board[input] == x or board[input] == o){
        std::cout << "\n" << board[input] << " has already been placed there. Try another slot\n";
        } else {
        board[input] = x;
        player = 2;
        c++;
        }
        //checks to see if game should end in a tie, because x will be placed 5 times if they haven't already won
        if (c == 5) {
     std::cout << "\nCat! Game ends in a tie!\n";
        game_done = true;
        }
        //inputs player 2 "Os"
  } else if (player == 2) {
        if(board[input] == x or board[input] == o){
        std::cout << "\n" << board[input] << " has already been placed there. Try another slot\n";
        } else {
        board[input] = o;
        player = 1;
        }
  } 
  // displays the board with updates
    std::cout << "\n";
    std::cout << "     |     |     \n";
 std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 std::cout << "_____|_____|_____\n";
 std::cout << "     |     |     \n";
 std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 std::cout << "_____|_____|_____\n";
 std::cout << "     |     |     \n";
 std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
 std::cout << "\n";
  }
  //looks for a winner
  for(int d = 0; d < 1; d++){
    if((board[0] == x and board[3] == x and board[6] == x) or (board[0] == x and board[1] == x and board[2] == x) or (board[0] == x and board[4] == x and board[8] == x) or (board[3] == x and board[4] == x and board[5] == x) or (board[6] == x and board[7] == x and board[8] == x) or (board[1] == x and board[4] == x and board[7] == x) or (board[2] == x and board[5] == x and board[8] == x) or (board[6] == x and board[4] == x and board[2] == x)){
    win1 = true;
    } else if ((board[0] == o and board[3] == o and board[6] == o) or (board[0] == o and board[1] == o and board[2] == o) or (board[0] == o and board[4] == o and board[8] == o) or (board[3] == o and board[4] == o and board[5] == o) or (board[6] == o and board[7] == o and board[8] == o) or (board[1] == o and board[4] == o and board[7] == o) or (board[2] == o and board[5] == o and board[8] == o) or (board[6] == o and board[4] == o and board[2] == o)){ 
    win2 = true;
    } else {
    win1 = false;
    win2 = false;
    } 
    }
    // displays the winner
    if (win1 == true){
        game_done = true;
        std::cout << x << " Wins!";
    } else if (win2 == true){
        game_done = true;
        std::cout << o << " Wins!";
    }
  }
}
  


