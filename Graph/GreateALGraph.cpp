#include<iostream>
#include"GreateGraphAdjList.h"

using namespace std;
/*  
#define MAXVEX 100  //顶点最大数

typedef char VertexType; //顶点的类型
typedef int  EdgeType; //边的权值

typedef struct EdgeNode {
	
	int adjvex;
	EdgeType weight;
	struct EdgeNode* next;

}EdgeNode;

typedef struct VertexNode {
	
	VertexNode data;
	EdgeNode* firstedge;

}VertexNode, AdjList[MAXVEX];

typedef struct ALGraph {

	AdjList adjlist;
	int numVertexes, numEdges;

}GraphAL;
*/
//先是顶点初始化，以头插法填入边

void CreateGraphAdjList(GraphAdjList* G) {

	int i, j, k;
	int w;
	EdgeNode* e;

	cout << "请输入G的顶点数和边数" << endl;
	cin >> G->numVertexes >> G->numEdges;

	for (k = 0; k < G->numVertexes; k++) {
		
		cout << "请输入第" << k << "个顶点的值" << endl;
		cin >> G->adjlist[k].data;
		G->adjlist[k].firstedge = NULL;
	}
	for (k = 0; k < G->numEdges; k++) {
		//i j weight
		cout << "请输入（i,j）的顶点序号 i, j, 和之间边的权值 w" << endl;
		cin >> i >> j >> w;

		e = new EdgeNode;
		e->adjvex = j;
		e->weight = w;
		e->next = G->adjlist[i].firstedge;
		G->adjlist[i].firstedge = e;



		e = new EdgeNode;
		e->adjvex = i;
		e->weight = w;
		e->next = G->adjlist[j].firstedge;
		G->adjlist[j].firstedge = e;


	}
	cout << endl;
}
