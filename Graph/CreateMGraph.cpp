#include<iostream>
#include"CreateMGraph.h"

using namespace std;

/*typedef char VertexType; //��������
typedef int EdgeType; //��Ȩֵ����

#define MAXVEX 10   //������
#define INF 65535 //infinity����,���ڱ�ʾ�ձߵ�Ȩ

typedef struct {

	VertexType vex[MAXVEX];
	EdgeType  arc[MAXVEX][MAXVEX];
	int vertexNum, edgeNum;
} MGraph;*/

/*1.���붥�����ͱ���
  2.���붥����Ϣ
  3.��ʼ���ڽӾ���= ��ʼ����
  4.�ñ���ѭ��������ߵ�Ȩ
  */
 
void CreateMGraph(MGraph* G) {
	int i, j, k;
	EdgeType w;


	//printf("�����붥�����ͱ�����\n");
	//scanf("%d %d", &G->vertexNum, &G->edgeNum);
	cout << "�����붥�����ͱ�����\n" << endl;
	cin >> G->vertexNum >> G->edgeNum;

	for (i = 0; i < G->vertexNum; i++) {

		cout << "�������" << i+1 << "������\n" << endl;
		cin >> G->vex[i];
	}
	for (i = 0; i < MAXVEX; i++) {
		for (j = 0; j < MAXVEX; j++) {
			G->arc[i][j] = INF;
		}
	}

	for (k = 0; k < G->edgeNum; k++) {
		cout << "������ߣ�i��j���е� i �� j���Լ�Ȩֵw \n" << endl;
		cin >> i >> j >> w;

		G->arc[i][j] = w;
	}
}


