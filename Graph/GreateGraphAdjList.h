#ifndef  GREATEGRAPHADJLIST_H
#define  GREATEGRAPHADJLIST_H


#define MAXVEX 50  //���������

typedef char VertexType; //���������
typedef int  EdgeType; //�ߵ�Ȩֵ

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
