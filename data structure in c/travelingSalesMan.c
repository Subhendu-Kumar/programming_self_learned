#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 4

int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int graph[][V], int visited[], int current, int count, int cost) {
    if (count == V && graph[current][0]) {
        return cost + graph[current][0];
    }

    int minCost = INT_MAX;

    for (int i = 0; i < V; i++) {
        if (visited[i] == 0 && graph[current][i]) {
            visited[i] = 1;
            minCost = min(minCost, tsp(graph, visited, i, count + 1, cost + graph[current][i]));
            visited[i] = 0;
        }
    }

    return minCost;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int visited[V];
    for (int i = 0; i < V; i++) {
        visited[i] = 0;
    }

    visited[0] = 1;

    int minCost = tsp(graph, visited, 0, 1, 0);

    printf("Minimum cost of the Traveling Salesman path: %d\n", minCost);

    return 0;
}
