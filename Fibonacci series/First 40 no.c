
#include <stdio.h>

int main() {
    int arr[40];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < 40; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("First 40 Fibonacci numbers are:\n");
    for (int i = 0; i < 40; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
