#include <stdio.h>

int main() {
    int I = 1, count = 1;

    for(;;) {
        printf("%4d", I);

        if (I >= 99) 
            break;

        if (count % 5 == 0)
            printf("\n");

        count = count + 1;
        I = I + 2;
    }

    return 0;
}
