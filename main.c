#include <stdio.h>

#include "defs.h"
#include "bitboard.h"
#include "board.h"

int main() {
    printf("%s (%s) \n from %s\n\n", ENGINE, VERSION, AUTHOR);

    U64 empty_board = 0ULL;

    print_bitboard(empty_board);

    reset_board();

    print_bitboard(board[0]);
    return 0;

}