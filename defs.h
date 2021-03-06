#ifndef DEFS_H
#define DEFS_H

    #define AUTHOR "Marc-Philippe Huget"
    #define ENGINE "La Dame Blanche"
    #define VERSION "Augustus"

    // define bitboard data type
    #define U64 unsigned long long

    enum {
        a8, b8, c8, d8, e8, f8, g8, h8,
        a7, b7, c7, d7, e7, f7, g7, h7,
        a6, b6, c6, d6, e6, f6, g6, h6,
        a5, b5, c5, d5, e5, f5, g5, h5,
        a4, b4, c4, d4, e4, f4, g4, h4,
        a3, b3, c3, d3, e3, f3, g3, h3,
        a2, b2, c2, d2, e2, f2, g2, h2,
        a1, b1, c1, d1, e1, f1, g1, h1, no_sq
    };

    // encode pieces
    enum { P, N, B, R, Q, K, p, n, b, r, q, k };

    // ASCII pieces
    static char ascii_pieces[12] = "PNBRQKpnbrqk";

    // sides to move (colors)
    enum { white, black, both };

    // castling rights binary encoding

    /*
        bin  dec
        
    0001    1  white king can castle to the king side
    0010    2  white king can castle to the queen side
    0100    4  black king can castle to the king side
    1000    8  black king can castle to the queen side
    examples
    1111       both sides an castle both directions
    1001       black king => queen side
                white king => king side
    */

    enum { wk = 1, wq = 2, bk = 4, bq = 8 };


#endif 