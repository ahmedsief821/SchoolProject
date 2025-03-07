// A simple school project that returns a random number between 1 and 10
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = rand() % 10 + 1;
    printf("The random number is: %d\n", num);
    return 0;
}
