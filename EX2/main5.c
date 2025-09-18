#include <stdio.h>

int main() {
    char grade = 'B';
    printf("Your grade is %c\n", grade);

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Well done!\n");
            break;
        case 'D':
            printf("Better try again!\n");
            break;
        case 'F':
            printf("Better try again!\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    
    return 0;
}
