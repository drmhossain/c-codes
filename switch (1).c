#include <stdio.h>

int main() {

    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    switch (alphabet) {
    case 'x':
        printf("Your entry is under consideration");
        break;

    case 'y':
        printf("Your entry is allowed");
        break;

    case 'n':
        printf("Your entry is refused");
        break;

    default:
        printf("Please enter either x, y or n");
    }
    return 0;
}
