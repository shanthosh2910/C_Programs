#include <stdio.h>
#include <stdlib.h>

int **adjacencyMatrix;
int *queue;
int *visited;
int noOfVertices;
int front = 0, rear = -1;

void BFS(int Vertex)
{
    for (int i = 0; i < noOfVertices; i++)
        if (adjacencyMatrix[Vertex][i] && !visited[i])
            queue[++rear] = i;

    if (front <= rear)
    {
        visited[queue[front]] = 1;
        BFS(queue[front++]);
    }
}

int main()
{
    int staringVertex;
    printf("Number of Vertices......");
    scanf("%d", &noOfVertices);

    visited = (int *)calloc(noOfVertices, sizeof(int));
    queue = (int *)malloc(noOfVertices * sizeof(int));
    adjacencyMatrix = (int **)malloc(noOfVertices * sizeof(int *));
    for (int i = 0; i < noOfVertices; i++)
        adjacencyMatrix[i] = (int *)malloc(noOfVertices * sizeof(int));

    printf("\nGraph\n");
    for (int i = 0; i < noOfVertices; i++)
        for (int j = 0; j < noOfVertices; j++)
            scanf("%d", &adjacencyMatrix[i][j]);

    printf("\nStarting Vertex\n");
    scanf("%d", &staringVertex);
    BFS(staringVertex);

    for (int i = 0; i < noOfVertices; i++)
        if (visited[i])
            printf("%d ", i);
}