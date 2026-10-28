#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void dfsUtil(int adj[MAX][MAX], int vertices, int current, int visited[MAX]) {
    visited[current] = 1;
    printf("%d ", current);

    for (int i = 0; i < vertices; i++) {
        if (adj[current][i] == 1 && !visited[i]) {
            dfsUtil(adj, vertices, i, visited);
        }
    }
}

void dfs(int adj[MAX][MAX], int vertices, int start) {
    int visited[MAX] = {0};
    dfsUtil(adj, vertices, start, visited);
}

int main() {
    int vertices = 5;
    int adj[MAX][MAX] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };

    printf("DFS Traversal starting from vertex 0:\n");
    dfs(adj, vertices, 0);
    printf("\n");

    return 0;
}
