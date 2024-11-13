#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, nextTerm;

    printf("Fibonacci Series: %d %d ", n1, n2);

    for (int i = 3; i <= 10; i++) {
        nextTerm = n1 + n2;
        printf("%d ", nextTerm);
        n1 = n2;
        n2 = nextTerm;
    }

    return 0;
}
