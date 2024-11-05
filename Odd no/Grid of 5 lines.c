#include <stdio.h>

int main() {
    int I = 1, count = 0;

    while (I <= 99) {
        printf("%4d", I);
        I = I + 2;
        ++count;

        if (count % 5 == 0)
            printf("\n");
    }

    return 0;
}
