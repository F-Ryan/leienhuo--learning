#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
/* 
�������⣺
1.PNODEǰû��*��
2.δ��main֮ǰд�������� 
*/
typedef struct Node{
	int data;
	struct Node* pNode;
}NODE,*PNODE;

typedef struct Stack{
	PNODE pTop;
	PNODE pBottom;
}STACK;

void initStack(STACK* pS);

int main(){
	STACK S;
	
	initStack(&S);
	
	return 0;	
} 

void initStack(STACK* pS){
	pS->pTop = (PNODE)malloc(sizeof(NODE));
	
	if(pS->pTop == NULL){
		exit(-1);
	}else{
	pS->pTop->pNode = NULL;
	pS->pBottom =pS->pTop ;
	}
	

}
