#ifndef BISHOP_H
#define BISHOP_H

#include "Base_piece.h"

class Bishop:public Base_piece{
    public:
        Bishop(Square);
        ~Bishop();
        void setting_stcm(Square, Square, Square);
};

#endif