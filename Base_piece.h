#ifndef BASE_PIECE_H
#define BASE_PIECE_H

#include "Square.h"

class Base_piece{
    public:
        Square m_position;
        int m_size_of_stcm;
        Square* m_squares_that_can_move;
        void check_available_square();
};

#endif