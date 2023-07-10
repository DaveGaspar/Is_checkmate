#include "Base_piece.h"

void Base_piece::check_available_square(){
    if (m_squares_that_can_move[m_size_of_stcm].m_number >= 1 && m_squares_that_can_move[m_size_of_stcm].m_number <= 8){
        if (m_squares_that_can_move[m_size_of_stcm].m_letter >= 97 && m_squares_that_can_move[m_size_of_stcm].m_letter <= 104){
            m_size_of_stcm++;
        }
    }
}