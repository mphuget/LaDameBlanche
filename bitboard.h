#ifndef BITBOARD_H
#define BITBOARD_H

    #include "defs.h"

    // set/get/pop bit macros
    #define set_bit(bitboard, square) ((bitboard) |= (1ULL << (square)))
    #define get_bit(bitboard, square) ((bitboard) & (1ULL << (square)))
    #define pop_bit(bitboard, square) ((bitboard) &= ~(1ULL << (square)))

    void print_bitboard(U64 bitboard);

#endif
