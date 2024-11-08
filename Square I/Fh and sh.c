#include <stdio.h>

int main() {
    int i, fh, sh, sq;

    for(i = 32; i * i <= 9999; i++) {
        sq = i * i;
        fh = sq / 100;
        sh = sq % 100;
        printf("%d is %d %d\n", sq, fh, sh);
    }

    return 0;
}
