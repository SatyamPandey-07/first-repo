#include <stdio.h>

void oddeven(int n) {
    (n % 2 == 0) ? printf("Even Number\n") : printf("Odd Number\n");
}

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    oddeven(num);
    return 0;
}
