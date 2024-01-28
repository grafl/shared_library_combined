#include <stdio.h>

#include "adder.h"
#include "multiplier.h"

int main(int argc, char* argv[]) {
    printf(" 2 + 7 = %d\n", grafl::add(2, 7));
    printf(" 2 * 7 = %d\n", grafl::multiply(2, 7));
    return 0;
}
