#include <stdio.h>

int main() {
    int count = 0;

    for (int I = 1; I <= 99; I += 2) {
        printf("%4d", I);
        ++count;

        if (count % 5 == 0)
            printf("\n");
    }

    return
