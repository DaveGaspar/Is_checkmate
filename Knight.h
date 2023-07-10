#ifndef KNIGHT_H
#define KNIGHT_H

#include "Base_piece.h"

class Knight:public Base_piece{
    public:
        Knight(Square);
        ~Knight();
};

#endif