#include <stdio.h>

void main() {
    int x, result;
    char operator;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter a bitwise operator AND: & , OR: | , XOR: ^ , RIGHT_SHIFT: > , LEFT_SHIFT: < , NOT: ~  ::\n");
    scanf(" %c", &operator);

    switch (operator) {
        case '&':
            result = x & x;
            break;
        case '|':
            result = x | x;
            break;
        case '^':
            result = x ^ x;
            break;
        case '>':
            result = x >> 1;
            break;
        case '<':
            result = x << 1;
            break;
        case '~':
            result = ~x;
            break;
        default:
            printf("Enter a valid bitwise operator.");
            break;
    }

    printf("Result: %d", result);

}