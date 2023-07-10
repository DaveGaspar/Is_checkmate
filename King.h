#ifndef KING_H
#define KING_H

#include "Base_piece.h"

class King:public Base_piece{
    public:
        King(Square);
        ~King();
};

#endif