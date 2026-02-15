#include <stdio.h>  
#include <stdlib.h>  

// A utility function to add an edge in an undirected graph  
void addEdge(int **adj, int u, int v) {  
    adj[u][v] = 1;  // Add v to u's list  
    adj[v][u] = 1;  // Add u to v's list  
}  

// A utility function to print the adjacency list representation of the graph  
void printGraph(int **adj, int V) {  
    for (int v = 0; v < V; v++) {  
        printf("\n Adjacency list of vertex %d head ", v);  
        for (int j = 0; j < V; j++) {  
            if (adj[v][j]) {  
                printf(" -> %d", j);  
            }  
        }  
        printf("\n");  
    }  
}  

int main() {  
    int V = 5; // Number of vertices  

    // Allocate memory for adjacency matrix  
    int **adj = (int **)malloc(V * sizeof(int *));  
    for (int i = 0; i < V; i++) {  
        adj[i] = (int *)malloc(V * sizeof(int));  
        for (int j = 0; j < V; j++) {  
            adj[i][j] = 0; // Initialize all to 0  
        }  
    }  

    // Adding edges  
    addEdge(adj, 0, 1);  
    addEdge(adj, 0, 4);  
    addEdge(adj, 1, 3);  
    addEdge(adj, 1, 4);  
    addEdge(adj, 2, 3);  
    addEdge(adj, 3, 4);  

    // Print the graph  
    printGraph(adj, V);  

    // Free allocated memory  
    for (int i = 0; i < V; i++) {  
        free(adj[i]);  
    }  
    free(adj);  

    return 0;  
}