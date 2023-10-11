#include<iostream>
#include"CreateMGraph.h"

using namespace std;

/*typedef char VertexType; //顶点类型
typedef int EdgeType; //边权值类型

#define MAXVEX 10   //顶点数
#define INF 65535 //infinity无限,用于表示空边的权

typedef struct {

	VertexType vex[MAXVEX];
	EdgeType  arc[MAXVEX][MAXVEX];
	int vertexNum, edgeNum;
} MGraph;*/

/*1.输入顶点数和边数
  2.读入顶点信息
  3.初始化邻接矩阵= 初始化边
  4.用边数循环，输入边的权
  */
 
void CreateMGraph(MGraph* G) {
	int i, j, k;
	EdgeType w;


	//printf("请输入顶点数和边数：\n");
	//scanf("%d %d", &G->vertexNum, &G->edgeNum);
	cout << "请输入顶点数和边数：\n" << endl;
	cin >> G->vertexNum >> G->edgeNum;

	for (i = 0; i < G->vertexNum; i++) {

		cout << "请输入第" << i+1 << "个顶点\n" << endl;
		cin >> G->vex[i];
	}
	for (i = 0; i < MAXVEX; i++) {
		for (j = 0; j < MAXVEX; j++) {
			G->arc[i][j] = INF;
		}
	}

	for (k = 0; k < G->edgeNum; k++) {
		cout << "请输入边（i，j）中的 i 和 j，以及权值w \n" << endl;
		cin >> i >> j >> w;

		G->arc[i][j] = w;
	}
}


