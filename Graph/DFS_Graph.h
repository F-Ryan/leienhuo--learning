#include"CreateMGraph.h"
#include"GreateGraphAdjList.h"

#ifndef  DFSMGRAPH_H
#define  DFSMGRAPH_H

#define MAX 10
typedef int Boolean;
//Boolean visited[MAX];

#define TURE 1
#define FALSE 0

void DFS_M(MGraph G, int i);
void DFS_MTravel(MGraph G);

void DFS_AL(GraphAdjList G, int i);
void DFS_ALTravel(GraphAdjList G);

#endif // ! DFSMGRAPH_H

