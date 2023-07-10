#ifndef QUEEN_H
#define QUEEN_H

#include "Base_piece.h"

class Queen:public Base_piece{
    public:
        Queen(Square);
        ~Queen();
        void setting_stcm(Square, Square, Square);
};

#endif