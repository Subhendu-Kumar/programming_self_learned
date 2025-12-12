#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
}

int main() {
    int val[100], wt[100];
    int W, n;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter values and weights for each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%d %d", &val[i], &wt[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &W);

    printf("Maximum value: %d\n", knapSack(W, wt, val, n));

    return 0;
}
