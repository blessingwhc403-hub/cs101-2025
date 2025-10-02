#include <stdio.h>

int main() {
    int a = -6;
    int b = 6;
    int c = 6;
    if (a < 0) {
        int cal = (a * -1) * 100 + b * 10 + c;
        printf("%d", cal * -1);
    }
    else {
        printf("%d", a * 100 + b * 10 + c);
    }
    return 0;
}
