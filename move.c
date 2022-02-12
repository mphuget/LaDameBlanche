#include <stdio.h>

#include "move.h"
#include "bitboard.h"
#include "board.h"

// generate pawn attacks
U64 generate_pawn_attacks(int side, int square)
{
    // result attacks bitboard
    U64 attacks = 0ULL;

    // piece bitboard
    U64 bitboard = 0ULL;
    
    // set piece on board
    set_bit(bitboard, square);
    
    // white pawns
    if (!side)
    {
        // generate pawn attacks
        if ((bitboard >> 7) & not_a_file) attacks |= (bitboard >> 7);
        if ((bitboard >> 9) & not_h_file) attacks |= (bitboard >> 9);
    }
    
    // black pawns
    else
    {
        // generate pawn attacks
        if ((bitboard << 7) & not_h_file) attacks |= (bitboard << 7);
        if ((bitboard << 9) & not_a_file) attacks |= (bitboard << 9);    
    }
    
    // return attack map
    return attacks;
}

void generate_moves(int side) {

    int source_square, target_square;

    //iterate on all the bitboards
    for (int piece = P; piece <= k; piece++) {

        //get the bitboard for this corresponding piece
        U64 bitboard = board[piece];

        //if this is a white pawn
        if (piece == P) {


            print_bitboard(bitboard);

            for (int bit = 0; bit < 63; bit++) {
                if (get_bit(bitboard, bit) != 0) {
                    
                    source_square = bit;

                    //generate quiet moves
                    //one square ahead move
                    //only if there is  no piece on final square
                    target_square = source_square - 8;

                    //check whether this target square is occupied
                    
                    //two square ahead move
                    //only if the pawn is still in its initial position
                    //no piece is on intermediate and final square
                    //add the en passant square

                    //generate attack moves

                    //generate promotions

                }

            }


        }
        //if this is a black pawn
        else if (piece == p) {

            //generate quiet moves
            //one square ahead move
            //only if there is  no piece on final square

            //two square ahead move
            //only if the pawn is still in its initial position
            //no piece is on intermediate and final square
            //add the en passant square

            //generate attack moves

            //generate promotions

        }

    }

}
