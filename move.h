#ifndef MOVE_H

    #define MOVE_H

    #include "defs.h"

    // not A file constant
    static const U64 not_a_file = 18374403900871474942ULL;

    // not H file constant
    static const U64 not_h_file = 9187201950435737471ULL;

    // not HG file constant
    static const U64 not_hg_file = 4557430888798830399ULL;

    // not AB file constant
    static const U64 not_ab_file = 18229723555195321596ULL;

    // pawn attacks table [side][square]
    U64 pawn_attacks[2][64];

    U64 generate_move_pawn(int side, int square);

#endif