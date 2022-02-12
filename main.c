#include <stdio.h>

#include "board.h"
#include "move.h"

int main() {
    printf("%s (%s) \n from %s\n\n", ENGINE, VERSION, AUTHOR);

    reset_board();
    print_board();
    generate_moves(white);

    return 0;

}