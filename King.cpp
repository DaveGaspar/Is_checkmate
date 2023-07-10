#include "King.h"

King::King(Square p){
    m_position = p;
    m_squares_that_can_move = new Square[8];
    m_size_of_stcm = 0;
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter - 1;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number+1;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter-1;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter-1;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number-1;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number-1;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter+1;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number-1;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter+1;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter+1;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number+1;
    check_available_square();
    m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter;
    m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number+1;
    check_available_square();
    
}

King::~King(){
    delete[] m_squares_that_can_move;
    m_squares_that_can_move = nullptr;
}