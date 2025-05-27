#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 100; i++) {
        printf("%d", i);
        if (i % 2 == 0) {
            break;
        }
    }

    return 0;
}
