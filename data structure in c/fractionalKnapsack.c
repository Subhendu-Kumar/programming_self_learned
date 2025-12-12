#include <stdio.h>

#define MAX_ITEMS 100

struct Item {
    int weight;
    int value;
};

double fractionalKnapsack(int capacity, struct Item items[], int n) {
    double totalValue = 0.0;
    int i;
    for (i = 0; i < n; i++)
        items[i].value = (double)items[i].value / items[i].weight;
    
    for (i = 0; i < n - 1; i++) {
        int j, max_idx = i;
        for (j = i + 1; j < n; j++)
            if (items[j].value > items[max_idx].value)
                max_idx = j;
        struct Item temp = items[max_idx];
        items[max_idx] = items[i];
        items[i] = temp;
    }
    
    for (i = 0; i < n && capacity > 0; i++) {
        if (items[i].weight <= capacity) {
            totalValue += items[i].value * items[i].weight;
            capacity -= items[i].weight;
        } else {
            totalValue += items[i].value * capacity;
            capacity = 0;
        }
    }
    return totalValue;
}

int main() {
    int capacity, n, i;
    struct Item items[MAX_ITEMS];
    
    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);
    
    printf("Enter the number of items: ");
    scanf("%d", &n);
    
    printf("Enter the weight and value of each item:\n");
    for (i = 0; i < n; i++)
        scanf("%d %d", &items[i].weight, &items[i].value);
    
    double max_value = fractionalKnapsack(capacity, items, n);
    
    printf("Maximum value in the knapsack = %.2f\n", max_value);
    
    return 0;
}
