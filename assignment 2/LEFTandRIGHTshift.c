#include <stdio.h>

int main() {
    int num = 10;

    // Left Shift Operator
    int shiftedLeft = num << 2; // Shifting left by 2 positions
    printf("After left shift: %d\n", shiftedLeft);

    // Right Shift Operator
    int shiftedRight = num >> 1; // Shifting right by 1 position
    printf("After right shift: %d\n", shiftedRight);

    return 0;
}
