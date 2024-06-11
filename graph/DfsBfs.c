#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_VERTICES 10

// Structure to represent a node in the adjacency list
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent a graph as an array of linked lists
struct Graph {
    int size; // Number of vertices
    struct Node* head[MAX_VERTICES]; // Array of pointers to heads of linked lists
};

// Function to create a graph with given number of vertices
struct Graph* createGraph(int size) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->size = size;

    // Initialize all head pointers to NULL
    for (int i = 0; i < size; i++) {
        graph->head[i] = NULL;
    }

    return graph;
}

// Function to add an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Create a new node for the destination vertex
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = dest;
    newNode->next = graph->head[src]; // Add the node at the beginning of the source's list
    graph->head[src] = newNode;

    // Since graph is undirected, add an edge from dest to src also
    struct Node* newNode2 = (struct Node*)malloc(sizeof(struct Node));
    newNode2->data = src;
    newNode2->next = graph->head[dest];
    graph->head[dest] = newNode2;
}

// Function to perform a Depth-First Search (DFS) traversal
void DFSUtil(struct Graph* graph, int v, bool visited[]) {
    // Mark the current node as visited and print it
    visited[v] = true;
    printf("%d ", v);

    // Recur for all the vertices adjacent to this vertex
    struct Node* current = graph->head[v];
    while (current) {
        if (!visited[current->data]) {
            DFSUtil(graph, current->data, visited);
        }
        current = current->next;
    }
}

// Function to perform DFS traversal of the vertices reachable from v
void DFS(struct Graph* graph, int v) {
    bool visited[MAX_VERTICES]; // Boolean array to keep track of visited vertices
    for (int i = 0; i < graph->size; ++i) {
        visited[i] = false;
    }

    DFSUtil(graph, v, visited);
}

// Function to perform a Breadth-First Search (BFS) traversal
void BFS(struct Graph* graph, int v) {
    bool visited[MAX_VERTICES]; // Boolean array to keep track of visited vertices
    for (int i = 0; i < graph->size; i++) {
        visited[i] = false;
    }

    // Create a queue for BFS
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    // Mark the current node as visited and enqueue it
    visited[v] = true;
    queue[rear++] = v;

    while (front < rear) {
        // Dequeue a vertex from queue and print it
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        // Get all adjacent vertices of the dequeued vertex
        struct Node* current = graph->head[currentVertex];
        while (current) {
            int adjVertex = current->data;
            if (!visited[adjVertex]) {
                visited[adjVertex] = true;
                queue[rear++] = adjVertex;
            }
            current = current->next;
        }
    }
}

int main() {
    int V = 7; // Number of vertices in the graph

    // Create a graph
    struct Graph* graph = createGraph(V);

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);

    printf("DFS traversal starting from vertex 0:\n");
    DFS(graph, 0);
    printf("\n");

    printf("BFS traversal starting from vertex 0:\n");
    BFS(graph, 0);
    printf("\n");

    return 0;
}
