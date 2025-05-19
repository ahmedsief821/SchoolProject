// This is a simple example of an infinite loop with printf
#include <stdio.h>

int main() {
    int count = 0;
    while (1) {
        if (count % 2 == 0) {
            printf("Odd\n");
        } else {
            printf("Even\n");
        }
        count++;
    }
    return 0;
}
