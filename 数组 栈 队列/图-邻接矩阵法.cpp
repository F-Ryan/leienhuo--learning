#include<stdio.h>
 
#define MaxVertexNum 100    /* ��󶥵�����Ϊ100 */
#define INFINITY 65535        /* ����Ϊ˫�ֽ��޷������������ֵ65535*/
typedef int Vertex;         /* �ö����±��ʾ����,Ϊ���� */
typedef int WeightType;        /* �ߵ�Ȩֵ��Ϊ���� */
typedef char DataType;        /* ����洢������������Ϊ�ַ��� */

/* �ߵĶ��� */
typedef struct ENode *PtrToENode;
struct ENode{
    Vertex V1, V2;      /* �����<V1, V2> */
    WeightType Weight;  /* Ȩ�� */
};
typedef PtrToENode Edge;

int main(){
	
	return 0;
}
