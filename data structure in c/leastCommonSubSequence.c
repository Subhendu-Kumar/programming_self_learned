#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs_length(char *X, char *Y, int m, int n) {
    if (m == 0 || n == 0)
        return 0;
    else if (X[m - 1] == Y[n - 1])
        return 1 + lcs_length(X, Y, m - 1, n - 1);
    else
        return max(lcs_length(X, Y, m, n - 1), lcs_length(X, Y, m - 1, n));
}

int main() {
    char X[100], Y[100];

    printf("Enter the first string: ");
    scanf("%s", X);

    printf("Enter the second string: ");
    scanf("%s", Y);

    int m = strlen(X);
    int n = strlen(Y);

    printf("Length of LCS is %d\n", lcs_length(X, Y, m, n));

    return 0;
}
