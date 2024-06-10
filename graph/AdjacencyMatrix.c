#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100 // Define a maximum number of vertices

// Graph structure using adjacency matrix
struct Graph {
    int size; // Number of vertices
    int adjMatrix[MAX_VERTICES][MAX_VERTICES]; // Adjacency matrix
};

// Function to create a graph with given number of vertices
struct Graph* createGraph(int size) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->size = size;

    // Initialize all elements of adjMatrix to 0
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }

    return graph;
}

// Function to add an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1; // Add edge from src to dest
    graph->adjMatrix[dest][src] = 1; // Add edge from dest to src (for undirected graph)
}

// Function to remove an edge from an undirected graph
void removeEdge(struct Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 0; // Remove edge from src to dest
    graph->adjMatrix[dest][src] = 0; // Remove edge from dest to src (for undirected graph)
}

// Function to print the adjacency matrix representation of the graph
void printAdjMatrix(struct Graph* graph) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < graph->size; i++) {
        for (int j = 0; j < graph->size; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Create a graph with 5 vertices
    int V = 5;
    struct Graph* graph = createGraph(V);

    // Add edges
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    // Print the adjacency matrix
    printf("Adjacency Matrix:\n");
    printAdjMatrix(graph);

    // Remove an edge
    // removeEdge(graph, 1, 2);

    // // Print the adjacency matrix after removing an edge
    // printf("\nAdjacency Matrix after removing an edge:\n");
    // printAdjMatrix(graph);

    return 0;
}
