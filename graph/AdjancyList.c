#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define MAX_VERTICES 10

// Structure to represent an adjacency list node
struct Node
{
  int data;
  struct Node *next;
};

// Structure to represent a graph as an array of linked lists
struct Graph
{
  int size;                        // Number of vertices
  struct Node *head[MAX_VERTICES]; // Array of pointers to heads of linked lists
};

// Function to create a graph with given number of vertices
struct Graph *createGraph(int size)
{
  struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
  graph->size = size;

  // Initialize all head pointers to NULL
  for (int i = 0; i < size; i++)
  {
    graph->head[i] = NULL;
  }

  return graph;
}

// Function to print the adjacency list representation of the graph
void printGraph(struct Graph *graph)
{
  for (int v = 0; v < graph->size; ++v)
  {
    struct Node *current = graph->head[v];
    printf("\n Vertex %d:", v);
    while (current)
    {
      printf("-> %d", current->data);
      current = current->next;
    }
    printf("\n");
  }
}
// Function to add an edge to an undirected graph
void addEdge(struct Graph *graph, int src, int dest)
{
  // Create a new node for the destination vertex
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = dest;
  newNode->next = graph->head[src]; // Add the node at the beginning of the source's list

  // Since graph is undirected, add an edge from dest to src also
  struct Node *newNode2 = (struct Node *)malloc(sizeof(struct Node));
  newNode2->data = src;
  newNode2->next = graph->head[dest];

  graph->head[src] = newNode;
  graph->head[dest] = newNode2;
  // printGraph(graph);
  // Sleep(10000);
}


int main()
{
  int V = 5; // Number of vertices

  // Create a graph
  struct Graph *graph = createGraph(V);

  // Add edges
  addEdge(graph, 0, 1);
  addEdge(graph, 0, 2);
  addEdge(graph, 1, 2);
  addEdge(graph, 1, 3);
  addEdge(graph, 2, 4);

  // Print the graph
  printGraph(graph);

  return 0;
}