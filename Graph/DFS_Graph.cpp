//#include "CreateMGraph.h"
//#include "CreateALGraph.h"
#include "DFS_Graph.h"
#include <iostream>

using namespace std;
/*
typedef int Boolean;
Boolean visited[MAX];

#define TURE 1
#define FALSE 0
#define MAX 10 //�ڽӾ���Ķ�����
*/
Boolean visited[MAX];
//�ڽӾ���DFS
void DFS_M(MGraph G, int i){
	int j;

	visited[i] = TURE;
	cout<< "���ǵ�" << i+1 <<"������" << G.vex[i] << endl;

	for (j = 0; j < G.vertexNum; j++) {
		if (G.arc[i][j] < INF && G.arc[i][j] > 0 && !visited[j]) {

			DFS_M(G, j);
		}
	}
}

void DFS_MTravel(MGraph G){
	int i;

	//��ʼ������
	for (i = 0; i < G.vertexNum; i++) {
		visited[i] = FALSE;
	}

	//����
	for (i = 0; i < G.vertexNum; i++) {
		if (!visited[i]) {
			DFS_M(G, i);
		}
	}

}

//�ڽӱ�DFS
void DFS_AL(GraphAdjList G, int i) { //�ݹ�ķ���

	visited[i] = TURE;
	cout << G.adjlist[i].data  << endl;

	EdgeNode* e = G.adjlist[i].firstedge;

	while (e)
	{

		if (!visited[e->adjvex]) {

			DFS_AL(G, e->adjvex);

			e = e->next;
		}
	}
}

void DFS_ALTravel(GraphAdjList G){ //�ȳ�ʼ����DFS_AL����ÿ������

	int i;

	for (i = 0; i < G.numVertexes; i++) {

		visited[i] = FALSE;
	}
	
	for (i = 0; i < G.numVertexes; i++) {
		if (!visited[i]) {
			DFS_AL(G, i);
		}

	}

}