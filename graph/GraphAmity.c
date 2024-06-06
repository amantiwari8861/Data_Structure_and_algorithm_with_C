#include <stdio.h>
#include <stdlib.h>
#define N 6
struct Graph
{
    // An array of pointers to Node to represent an adjacency list
    struct Node *head[N];
};
// to store adjacency list nodes of the graph
struct Node
{
    int dest;
    struct Node *next;
};
// to store a graph edge
struct Edge
{
    int src, dest;
};
// Function to create an adjacency list from specified edges
struct Graph *createGraph(struct Edge edges[], int n)
{
    unsigned i;
    // allocate storage for the graph data structure
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    // initialize head pointer for all vertices
    for (i = 0; i < N; i++)
    {
        graph->head[i] = NULL;
    }
    // add edges to the directed graph one by one
    for (i = 0; i < n; i++)
    {
        // get the source and destination vertex
        int src = edges[i].src;
        int dest = edges[i].dest;
        // allocate a new node of adjacency list from `src` to `dest`
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->dest = dest;
        // point new node to the current head
        newNode->next = graph->head[src];
        // point head pointer to the new node
        graph->head[src] = newNode;
    }
    return graph;
}
// Function to print adjacency list representation of a graph
void printGraph(struct Graph *graph)
{
    int i;
    for (i = 0; i < N; i++)
    {
        // print current vertex and all its neighbors
        struct Node *ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("(% d->% d)\t", i, ptr->dest);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int main(void)
{
    struct Edge edges[] ={{0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}};
    // calculate the total number of edges (c)
    int n = sizeof(edges) / sizeof(edges[0]);
    // construct a graph from the given edges
    struct Graph *graph = createGraph(edges, n);
    // Function to print adjacency list representation of a graph
    printGraph(graph);
    return 0;
}