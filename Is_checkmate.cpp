#include "Is_checkmate.h"

Is_checkmate::Is_checkmate(){
	std::string user_input;
	Square temp_square;

	std::cout << "Black:" << std::endl;	
	std::getline(std::cin, user_input);

	invalid_input_check(user_input);

	if (user_input.at(0) != 'K'){
		invalid_input();
	}
	
	temp_square.m_letter = user_input.at(1);
	temp_square.m_number = (user_input.at(2) - '0');

	m_king_b = new King(temp_square);
	
	std::cout << "\nWhite:" << std::endl;

	for (int i = 1; i < 5; i++){
		std::getline(std::cin, user_input);
		invalid_input_check(user_input);
		temp_square.m_letter = user_input.at(1);
		temp_square.m_number = (user_input.at(2) - '0');
		switch (user_input.at(0))
		{
		case 'K':
			if (m_king_w != nullptr) {invalid_input();}
			m_king_w = new King(temp_square);
			break;
		case 'Q':
			if (m_queen != nullptr) {invalid_input();}
			m_queen = new Queen(temp_square);
			break;
		case 'B':
			if (m_bishop != nullptr) {invalid_input();}
			m_bishop = new Bishop(temp_square);
			break;
		case 'N':
			if (m_knight != nullptr) {invalid_input();}
			m_knight = new Knight(temp_square);
			break;
		}
	}
	if (m_king_b->m_position.m_letter == m_king_w->m_position.m_letter && m_king_b->m_position.m_number == m_king_w->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_king_b->m_position.m_letter == m_queen->m_position.m_letter && m_king_b->m_position.m_number == m_queen->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_king_b->m_position.m_letter == m_bishop->m_position.m_letter && m_king_b->m_position.m_number == m_bishop->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_king_b->m_position.m_letter == m_knight->m_position.m_letter && m_king_b->m_position.m_number == m_knight->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_king_w->m_position.m_letter == m_knight->m_position.m_letter && m_king_w->m_position.m_number == m_knight->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_king_w->m_position.m_letter == m_queen->m_position.m_letter && m_king_w->m_position.m_number == m_queen->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_king_w->m_position.m_letter == m_bishop->m_position.m_letter && m_king_w->m_position.m_number == m_bishop->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_queen->m_position.m_letter == m_knight->m_position.m_letter && m_queen->m_position.m_number == m_knight->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_queen->m_position.m_letter == m_bishop->m_position.m_letter && m_queen->m_position.m_number == m_bishop->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	if (m_bishop->m_position.m_letter == m_knight->m_position.m_letter && m_bishop->m_position.m_number == m_knight->m_position.m_number){
		std::cout << "Pieces can't be on the same square" << std::endl;
		invalid_input();
	}
	for (int i = 0; i < m_king_b->m_size_of_stcm; i++){
		if (m_king_b->m_squares_that_can_move[i].m_letter == m_king_w->m_position.m_letter && m_king_b->m_squares_that_can_move[i].m_number == m_king_w->m_position.m_number){
			std::cout << "Kings can't be close to each other" << std::endl;
			invalid_input();
		}
	}
}

Is_checkmate::~Is_checkmate(){
	delete m_king_b;
	m_king_b = nullptr;
	delete m_king_w;
	m_king_w = nullptr;
	delete m_queen;
	m_queen = nullptr;
	delete m_bishop;
	m_bishop = nullptr;
	delete m_knight;
	m_knight = nullptr;
}

void Is_checkmate::start(){
	check();
}

void Is_checkmate::check(){
	m_queen->setting_stcm(m_king_w->m_position, m_knight->m_position, m_bishop->m_position);
	m_bishop->setting_stcm(m_king_w->m_position, m_knight->m_position, m_queen->m_position);
	
	bool escape = false;
	bool is_check = false;

	for (int i = 0; i < m_queen->m_size_of_stcm; i++){
		if (m_king_b->m_position.m_letter == m_queen->m_squares_that_can_move[i].m_letter && m_king_b->m_position.m_number == m_queen->m_squares_that_can_move[i].m_number){
			is_check = true;
			break;
		}
	}
	if (is_check == false){
		for (int i = 0; i < m_bishop->m_size_of_stcm; i++){
			if (m_king_b->m_position.m_letter == m_bishop->m_squares_that_can_move[i].m_letter && m_king_b->m_position.m_number == m_bishop->m_squares_that_can_move[i].m_number){
				is_check = true;
				break;
			}
		}	
	}
	if (is_check == false){
		for (int i = 0; i < m_knight->m_size_of_stcm; i++){
			if (m_king_b->m_position.m_letter == m_knight->m_squares_that_can_move[i].m_letter && m_king_b->m_position.m_number == m_knight->m_squares_that_can_move[i].m_number){
				is_check = true;
				break;
			}
		}	
	}
	for (int i = 0; i < m_king_b->m_size_of_stcm; i++){
		bool flag = true;
		for (int j = 0; j < m_king_w->m_size_of_stcm; j++){
			if (m_king_b->m_squares_that_can_move[i].m_letter == m_king_w->m_squares_that_can_move[j].m_letter && m_king_b->m_squares_that_can_move[i].m_number == m_king_w->m_squares_that_can_move[j].m_number){
				flag = false;
				break;
			}
		}
		if (flag == false){
			continue;;
		}
		for (int j = 0; j < m_queen->m_size_of_stcm; j++){
			if (m_king_b->m_squares_that_can_move[i].m_letter == m_queen->m_squares_that_can_move[j].m_letter && m_king_b->m_squares_that_can_move[i].m_number == m_queen->m_squares_that_can_move[j].m_number){
				flag = false;
				break;
			}
		}
		if (flag == false){
			continue;;
		}
		for (int j = 0; j < m_bishop->m_size_of_stcm; j++){
			if (m_king_b->m_squares_that_can_move[i].m_letter == m_bishop->m_squares_that_can_move[j].m_letter && m_king_b->m_squares_that_can_move[i].m_number == m_bishop->m_squares_that_can_move[j].m_number){
				flag = false;
				break;
			}
		}
		if (flag == false){
			continue;;
		}
		for (int j = 0; j < m_knight->m_size_of_stcm; j++){
			if (m_king_b->m_squares_that_can_move[i].m_letter == m_knight->m_squares_that_can_move[j].m_letter && m_king_b->m_squares_that_can_move[i].m_number == m_knight->m_squares_that_can_move[j].m_number){
				flag = false;
				break;
			}
		}
		if (flag == false){
			continue;;
		}

		if (flag == true){
			escape = true;
			break;
		}
	}
	if (is_check == false && escape == false){
		std::cout << "The position you entered is stalemate, the black king has no legal moves" << std::endl;
	}
	if (is_check == true && escape == true){
		std::cout << "The position you entered is check, the black king is under check, but he can escape" << std::endl;
	}
	if (is_check == true && escape == false){
		std::cout << "The position you entered is checkmate, the black king is under check and has no legal moves" << std::endl;
	}
	if (is_check == false && escape == true){
		std::cout << "The position you entered is not check, checkmate or stalemate" << std::endl;
	}
}

void Is_checkmate::invalid_input(){
	std::cout << "Invalid input!" << std::endl;
	exit(0);
}

void Is_checkmate::invalid_input_check(std::string str){
	if (str.length() != 3){
		invalid_input();
	}

	switch (str.at(0))
	{
	case 'K':
	case 'Q':
	case 'B':
	case 'N':
		break;
	default:
		invalid_input();
		break;
	}

	switch (str.at(1))
	{
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g': 
	case 'h':
		break;
	default:
		invalid_input();
		break;
	}

	if ((str.at(2) - '0') < 1 || (str.at(2) - '0') > 8){
		invalid_input();
	}
}

void Is_checkmate::illegal_move(){
	std::cout << "Illegal move has been made!" << std::endl;
	exit(0);
}