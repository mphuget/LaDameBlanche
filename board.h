#ifndef BOARD_H
#define BOARD_H

    #include "defs.h"

    /*
    Six boards per color (Whte, Black)
    Board for: Pawn, Knight, Bishop, Rook, Queen, King
    */
    U64 board[12];

    // side to move
    int side;

    // enpassant square
    static int enpassant = no_sq; 

    // castling rights
    int castle;

    U64 set_white_pawns();
    U64 set_black_pawns();
    U64 set_white_knights();
    U64 set_black_knights();
    U64 set_white_bishops();
    U64 set_black_bishops();
    U64 set_white_rooks();
    U64 set_black_rooks();
    U64 set_white_queen();
    U64 set_black_queen();
    U64 set_white_king();
    U64 set_black_king();

    void print_board();
    void reset_board();
#endif