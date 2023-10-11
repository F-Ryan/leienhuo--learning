#include<iostream>
#include"GreateGraphAdjList.h"

using namespace std;
/*  
#define MAXVEX 100  //���������

typedef char VertexType; //���������
typedef int  EdgeType; //�ߵ�Ȩֵ

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
//���Ƕ����ʼ������ͷ�巨�����

void CreateGraphAdjList(GraphAdjList* G) {

	int i, j, k;
	int w;
	EdgeNode* e;

	cout << "������G�Ķ������ͱ���" << endl;
	cin >> G->numVertexes >> G->numEdges;

	for (k = 0; k < G->numVertexes; k++) {
		
		cout << "�������" << k << "�������ֵ" << endl;
		cin >> G->adjlist[k].data;
		G->adjlist[k].firstedge = NULL;
	}
	for (k = 0; k < G->numEdges; k++) {
		//i j weight
		cout << "�����루i,j���Ķ������ i, j, ��֮��ߵ�Ȩֵ w" << endl;
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
