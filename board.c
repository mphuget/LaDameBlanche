#include "defs.h"
#include "bitboard.h"
#include "board.h"

U64 set_white_pawns() {

    U64 new_board = 0ULL;

    set_bit(new_board, a2);
    set_bit(new_board, b2);
    set_bit(new_board, c2);
    set_bit(new_board, d2);
    set_bit(new_board, e2);
    set_bit(new_board, f2);
    set_bit(new_board, g2);
    set_bit(new_board, h2);    

    return new_board;

}

U64 set_black_pawns() {

    U64 new_board = 0ULL;

    set_bit(new_board, a7);
    set_bit(new_board, b7);
    set_bit(new_board, c7);
    set_bit(new_board, d7);
    set_bit(new_board, e7);
    set_bit(new_board, f7);
    set_bit(new_board, g7);
    set_bit(new_board, h7);    

    return new_board;

}

U64 set_white_knights() {

    U64 new_board = 0ULL;

    set_bit(new_board, b2);
    set_bit(new_board, g2);

    return new_board;

}

U64 set_black_knights() {

    U64 new_board = 0ULL;

    set_bit(new_board, b8);
    set_bit(new_board, g8);

    return new_board;

}

U64 set_white_bishops() {

    U64 new_board = 0ULL;

    set_bit(new_board, c2);
    set_bit(new_board, f2);

    return new_board;

}

U64 set_black_bishops() {

    U64 new_board = 0ULL;

    set_bit(new_board, c8);
    set_bit(new_board, f8);

    return new_board;

}

U64 set_white_rooks() {

    U64 new_board = 0ULL;

    set_bit(new_board, a1);
    set_bit(new_board, h1);

    return new_board;

}

U64 set_black_rooks() {

    U64 new_board = 0ULL;

    set_bit(new_board, a8);
    set_bit(new_board, h8);

    return new_board;

}

U64 set_white_queen() {

    U64 new_board = 0ULL;

    set_bit(new_board, d1);

    return new_board;

}

U64 set_black_queen() {

    U64 new_board = 0ULL;

    set_bit(new_board, d8);

    return new_board;

}

U64 set_white_king() {

    U64 new_board = 0ULL;

    set_bit(new_board, e1);

    return new_board;

}

U64 set_black_king() {

    U64 new_board = 0ULL;

    set_bit(new_board, e8);

    return new_board;

}

void reset_board() {

    //set white pawns
    board[0] = set_white_pawns();

    //set black pawns
    board[1] = set_black_pawns();

    //set white knights
    board[2] = set_white_knights();

    //set black knights
    board[3] = set_black_knights();

    //set white bishops
    board[4] = set_white_bishops();

    //set black bishops
    board[5] = set_black_bishops();

    //set white rooks
    board[6] = set_white_rooks();

    //set black rooks
    board[7] = set_black_rooks();

    //set white queen
    board[8] = set_white_queen();

    //set black queen
    board[9] = set_black_queen();

    //set white king
    board[10] = set_white_king();

    //set black king
    board[11] = set_black_king();

}