/Library for accessing the maximum integer variable value

#include <limits.h>

//Library for creating the set

#include <stdbool.h>

#include <stdio.h>

#define Vertices 5

//Finding the vertex with the lowest key value from a set of vertices not included in MST 

int Least_Key(int key[], bool Min_Span_Tree[])

{

    int least = INT_MAX, min_index;

    for (int v = 0; v < Vertices; v++)

        if (Min_Span_Tree[v] == false && key[v] < least)

            least = key[v], min_index = v;

    return min_index;

}

//Utility function to print MST

int print_Prims_MST(int parent[], int graph[Vertices][Vertices])

{

    printf("Edge \tWeight\n");

    for (int i = 1; i < Vertices; i++)

        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);

}

//Function for generating an MST

void prims_MST(int graph[Vertices][Vertices])

{

    int parent[Vertices];

    int key[Vertices];

    bool Min_Span_Tree[Vertices];

    for (int i = 0; i < Vertices; i++)

        key[i] = INT_MAX, Min_Span_Tree[i] = false;

    key[0] = 0;

    parent[0] = -1; 

    for (int count = 0; count < Vertices - 1; count++) {

        int u = Least_Key(key, Min_Span_Tree);

        Min_Span_Tree[u] = true;

        for (int v = 0; v < Vertices; v++)

            if (graph[u][v] && Min_Span_Tree[v] == false && graph[u][v] < key[v])

                parent[v] = u, key[v] = graph[u][v];

    }

    printf("Created Spanning Tree for Given Graph is: \n");

    printf("\n");

    print_Prims_MST(parent, graph);

}

//Driver method

int main()

{

    int graph[Vertices][Vertices] = { { 0, 3, 2, 0, 0 },

                        { 3, 0, 16, 12, 0 },

                        { 2, 16, 0, 0, 5 },

                        { 0, 12, 0, 0, 0 },

                        { 0, 0, 5, 0, 0 } };

    prims_MST(graph);

    return 0;

}
