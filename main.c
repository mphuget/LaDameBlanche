#include <stdio.h>

#include "board.h"

int main() {
    printf("%s (%s) \n from %s\n\n", ENGINE, VERSION, AUTHOR);

    reset_board();
    print_board();

    return 0;

}