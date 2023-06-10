#include <stdio.h>

void nop() {
    __asm__("nop");
}

int main() {
    printf("Before nop.\n");
    nop();
    printf("After nop.\n");

    return 0;
}
