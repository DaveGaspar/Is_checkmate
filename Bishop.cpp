#include "Bishop.h"

Bishop::Bishop(Square p){
    m_position = p;    
}

void Bishop::setting_stcm(Square p1, Square p2, Square p3){
    m_squares_that_can_move = new Square[13];
    m_size_of_stcm = 0;

    for (int i = 1; i < 8; i++){
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter-i;
        m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number+i;
        if (p1.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p1.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p2.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p2.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p3.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p3.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        check_available_square();    
    }
    for (int i = 1; i < 8; i++){
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter-i;
        m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number-i;
        if (p1.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p1.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p2.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p2.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p3.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p3.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        check_available_square();    
    }
    for (int i = 1; i < 8; i++){
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter+i;
        m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number-i;
        if (p1.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p1.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p2.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p2.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p3.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p3.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        check_available_square();    
    }
    for (int i = 1; i < 8; i++){
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter+i;
        m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number+i;
        if (p1.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p1.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p2.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p2.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        if (p3.m_letter == m_squares_that_can_move[m_size_of_stcm].m_letter && p3.m_number == m_squares_that_can_move[m_size_of_stcm].m_number){
            break;
        }
        check_available_square();    
    }
}

Bishop::~Bishop(){
    delete[] m_squares_that_can_move;
    m_squares_that_can_move = nullptr;
}