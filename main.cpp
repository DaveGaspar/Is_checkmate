#include "Is_checkmate.h"
#include <string>

int main(){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "------------Welcome to is the position checkmate or not------------" << std::endl;
    std::cout << "----------------------------Instruction----------------------------" << std::endl;
    std::cout << "First insert black king's position, and then white pieces positions" << std::endl;
    std::cout << "-----------------------------Example:------------------------------" << std::endl;
    std::cout << "---                             Ka1                             ---" << std::endl;
    std::cout << "---                             Kb7                             ---" << std::endl;
    std::cout << "---                             Qd4                             ---" << std::endl;
    std::cout << "---                             Bh2                             ---" << std::endl;
    std::cout << "---                             Ne5                             ---" << std::endl;
    std::cout << "-----------------------------Have fun!-----------------------------" << std::endl;    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Is_checkmate* game = new Is_checkmate;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    game->start();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    delete game;
    game = nullptr;
    return 0;
}