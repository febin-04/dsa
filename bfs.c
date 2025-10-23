#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// Function to add element to queue
void enqueue(int vertex) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = vertex;
    }
}

// Function to remove element from queue
int dequeue() {
    if (front == -1 || front > rear) {
        return -1; // Queue empty
    } else {
        return queue[front++];
    }
}

// Function to perform BFS
void BFS(int adj[MAX][MAX], int n, int start) {
    int visited[MAX] = {0}; // Keeps track of visited vertices
    int i, v;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front <= rear) {
        v = dequeue();
        printf("%d ", v + 1); // +1 for 1-based vertex numbering

        // Visit all neighbors of vertex v
        for (i = 0; i < n; i++) {
            if (adj[v][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n, i, j, start;
    int adj[MAX][MAX];

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter the starting vertex (1 - %d): ", n);
    scanf("%d", &start);

    BFS(adj, n, start - 1);

    return 0;
}
