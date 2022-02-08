#include <stdio.h>

#include "defs.h"
#include "bitboard.h"


int main() {
    printf("%s (%s) \n from %s\n\n", ENGINE, VERSION, AUTHOR);

    U64 init_board = 0ULL;

    print_bitboard(init_board);


    return 0;

}