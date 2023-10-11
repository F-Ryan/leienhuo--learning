#ifndef  GREATEGRAPHADJLIST_H
#define  GREATEGRAPHADJLIST_H


#define MAXVEX 50  //顶点最大数

typedef char VertexType; //顶点的类型
typedef int  EdgeType; //边的权值

typedef struct EdgeNode {
	
	int adjvex;
	EdgeType weight;
	struct EdgeNode* next;

}EdgeNode;

typedef struct VertexNode {
	
	VertexType data;
	EdgeNode* firstedge;

}VertexNode, AdjList[MAXVEX];

typedef struct GraphAL {

	AdjList adjlist;
	int numVertexes, numEdges;

}GraphAdjList;

void CreateGraphAdjList(GraphAdjList* G);

#endif
