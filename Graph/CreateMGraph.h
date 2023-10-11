#ifndef MGRAPH_H
#define MGRAPH_H
typedef char VertexType; //顶点类型
typedef int EdgeType; //边权值类型

#define MAXVEX 50  //最大顶点数
#define INF 65535 //infinity无限,用于表示空边的权

typedef struct {

	VertexType vex[MAXVEX];
	EdgeType  arc[MAXVEX][MAXVEX];
	int vertexNum, edgeNum;
}MGraph ;

void CreateMGraph(MGraph* G);


#endif
