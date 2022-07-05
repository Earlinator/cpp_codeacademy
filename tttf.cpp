#include <iostream>
#include <vector>
#include <string>

void introduction(){
    std::cout << "Hello and Welcome to Tic-Tac-Toe!\n" << "This is a 2 player game.\n" << "\n";
}
void board1(){
    std::vector<std::string> board = {"0", "1", "2", "3", "4", "5", "6", "7", "8"};
    std::cout << "\n";
    std::cout << "     |     |     \n";
 std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 std::cout << "_____|_____|_____\n";
 std::cout << "     |     |     \n";
 std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 std::cout << "_____|_____|_____\n";
 std::cout << "     |     |     \n";
 std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
 std::cout << "\n\n";
}



