#include "Queen.h"

Queen::Queen(Square p){
    m_position = p;
}

void Queen::setting_stcm(Square p1, Square p2, Square p3){
    m_squares_that_can_move = new Square[27];
    m_size_of_stcm = 0;

    //diagonal moves
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

    //horizontal and vertical moves
    for (int i = 1; i < 8; i++){
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter;
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
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter+i;
        m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number;
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
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter;
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
        m_squares_that_can_move[m_size_of_stcm].m_letter = m_position.m_letter-i;
        m_squares_that_can_move[m_size_of_stcm].m_number = m_position.m_number;
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

Queen::~Queen(){
    delete[] m_squares_that_can_move;
    m_squares_that_can_move = nullptr;
}