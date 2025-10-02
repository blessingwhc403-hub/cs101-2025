#include <stdio.h>


void print_sb(int i, int n) {
    for (int j = 0; j < n - i; j++) {
        printf(" ");
    }
}


void print_cum(int n) {
    for (int j = 0; j < n; j++) {
        printf("%d ", n);
    }
}

int main() {
    int qqq = 6;
    for (int i = 1; i <= qqq; i++) {
        print_sb(i, qqq);   
        print_cum(i);        
        printf("\n");        
    }
    return 0;
}
