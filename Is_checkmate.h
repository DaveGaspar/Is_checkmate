#ifndef IS_CHECKMATE_H
#define IS_CHECKMATE_H

#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"

class Is_checkmate{
    public:
        Is_checkmate();
        ~Is_checkmate();
    public:
        King* m_king_b = nullptr;
        King* m_king_w = nullptr;
        Queen* m_queen = nullptr;
        Bishop* m_bishop = nullptr;
        Knight* m_knight = nullptr;

        void start();
        void invalid_input();
        void invalid_input_check(std::string);
        void illegal_move();
        void check();
};

#endif