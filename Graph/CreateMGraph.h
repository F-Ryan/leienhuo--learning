#ifndef MGRAPH_H
#define MGRAPH_H
typedef char VertexType; //��������
typedef int EdgeType; //��Ȩֵ����

#define MAXVEX 50  //��󶥵���
#define INF 65535 //infinity����,���ڱ�ʾ�ձߵ�Ȩ

typedef struct {

	VertexType vex[MAXVEX];
	EdgeType  arc[MAXVEX][MAXVEX];
	int vertexNum, edgeNum;
}MGraph ;

void CreateMGraph(MGraph* G);


#endif
