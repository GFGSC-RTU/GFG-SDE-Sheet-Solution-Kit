#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct graph{
  int nVertices;   //number of vertices in the graph
  int nEdges;      //number of edges in the graph
  int **adjMatrix;
}Graph;
/*node of a Queue data structure*/  
typedef struct QueueNode{
  int data;
  struct QueueNode *next;
}queueNode;
queueNode *head = NULL;
  
void printGraph(Graph *);
Graph * createAdjMatrixOfGraph(Graph *);  
  
/* inserting to a queue data structure*/  
void enqueue( int item){
  queueNode *list = head;
  queueNode *temp = (queueNode*)malloc(sizeof(queueNode));
  temp->data = item;
  temp->next = NULL;
  if(list)
    temp->next = list;
    
  head = temp;
}
/*deleting from a queue data structure */
int dequeue(){
  
  int itemDequeued;
  queueNode *list = head;
  queueNode *temp = (queueNode*)malloc(sizeof(queueNode));
   /* if queue has no element */
  if(!list){
    return INT_MIN;
  }
  /* if queue containing one element */
  else if(!list->next){
    itemDequeued = list->data;
    head = NULL;
    free(list);
    return itemDequeued;
  }
   /* at the end of loop temp points to second last queueNode*/
  else{
    while(list->next){
      temp = list;
      list = list->next;
    }
  }
      
  itemDequeued = list->data;
  temp->next = NULL;
  free(list);
  return itemDequeued;
}  
  
/* this will create Adjacency matrix of the undirected graph graph */
Graph * createAdjMatrixOfGraph(Graph *g){
  
  int i, u, v;
  
  g = (Graph *)malloc(sizeof(Graph));
  
  printf("Enter the number of Vertices and Edges:");
  scanf("%d%d", &g->nVertices, &g->nEdges);
  
  g->adjMatrix = (int **)malloc(sizeof(int *) * g->nVertices);
  
  for(i = 0; i < g->nVertices; i++)
    g->adjMatrix[i] = (int *)malloc(sizeof(int) * g->nVertices);
  
  for(i = 0; i < g->nEdges; i++){
    printf("Reading the endpoints of an edge(u v):\n");
    scanf("%d %d", &u, &v);
    g->adjMatrix[u][v] = 1;
    g->adjMatrix[v][u] = 1;
  }
      
  return g;
}
void printGraph(Graph *g){
  
  int i, j;
  
  printf("\n***Adjacency Matrix of Graph***\n");
  for(i = 0 ; i < g->nVertices; i++ ){
    printf("\n\t");
    for(j = 0 ; j < g->nVertices; j++ ){
      
      if( g->adjMatrix[i][j] ){
        printf("1 ");
        }
      else
        printf("0 ");
    }
  }
}
  
  
void breadthFirstTraversal(Graph *g, int u, int *visited){
  
  int i, j;
  int vertexDequeued;
  visited[u] = 1;
  enqueue(u);
  for(j = 0; j < g->nVertices; j++){
    
    vertexDequeued = dequeue();
    
    if(vertexDequeued == INT_MIN)
      return;
    
    printf(" %d", vertexDequeued);
  
    for(i = 0; i < g->nVertices; i++){
      
      if( (g->adjMatrix[vertexDequeued][i]) && ( !(visited[i]) ) ){
        visited[i] = 1;
        enqueue(i);
      }
    }
  }
}
  
int main(void){
  
  Graph *g = NULL;
  int *visited;
  
  g = createAdjMatrixOfGraph(g);
  printGraph(g);
  
  visited = (int *)malloc(g->nVertices*sizeof(int));
  
  printf("\nBreadth First Traversal of the graph: ");
  breadthFirstTraversal(g, 2, visited);
    
  return 0;
}