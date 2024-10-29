#include <math.h>

int nodigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    for (int i = 100; i <= 9999; i++) {
        int ti = i, sum = 0;
        while (ti > 0) {
            sum += pow(ti % 10, nodigits(i));
            ti /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
