#include <stdio.h>
#include <stdlib.h>

typedef int SElement;

typedef struct Node{
	SElement data;
	struct Node* pNode;
}NODE,*PNODE;

typedef struct Stack{
	PNODE pTop;
	PNODE pBottom;
}STACK,*PSTACK;

void init(PSTACK ps); //��ʼ��ջ 
bool push(PSTACK ps,SElement val); //��val��ջ 
bool pop(PSTACK ps,SElement *pval); //��ջ������ֵ���浽pval 
bool empty(PSTACK ps); //����ջ�Ƿ�Ϊ�� 
void traverse(STACK *ps); //��������ջ�������ջ�е�ֵ 
void clear(STACK *ps); //���ջ 

int main(void){
	STACK S;
	SElement num;
	
	init(&S);
	push(&S,1);
	push(&S,2);
	push(&S,3);
	push(&S,4);
	push(&S,5);
	pop(&S,&num);
	printf("%d",num);
	printf("\n");
	traverse(&S);
	printf("\n");
	clear(&S);
	traverse(&S);
	
	return 0;
} 

void init(PSTACK ps){
	
	ps->pBottom = (PNODE)malloc(sizeof(NODE));
	
	if(ps->pBottom == NULL ){
		printf("ջ����ʧ�ܣ�\n");
		exit(-1);
	}else{
		printf("ջ�����ɹ���\n");
		ps->pBottom->pNode = NULL;
		ps->pTop = ps->pBottom ;
	}
	
	
	return;
}

bool push(PSTACK ps,SElement val){
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if(pNew == NULL)
		return false;
	
	pNew->data = val;
	pNew->pNode = ps->pTop  ;
	ps->pTop = pNew ;
	
	return true;	
}

bool pop(PSTACK ps,SElement *pval){
	PNODE p;
	
	p = ps->pTop ;
	*pval = p->data ;
	ps->pTop = p->pNode ;
	
	free(p);
	p = NULL;
	
	return true;
}
bool empty(PSTACK ps){
	if(ps->pTop == ps->pBottom ){
		return true;
	}else{
		return false;
	}
}

void traverse(STACK *ps){
	 
	 if(empty(ps)){
	 	printf("ջΪ�գ�\n");
		exit(-1);
	 }
	 PNODE p = ps->pTop ;
	 while(p->pNode != NULL ){
	 	printf("%d ",p->data );
	 	p = p->pNode ;
	 	
	 }
	 
	 return;
}

void clear(STACK *ps){
	if(empty(ps)){
	 	printf("ջΪ�գ�\n");
		exit(-1);
	 }else{
	 while(ps->pTop != ps->pBottom ){
	 	PNODE p = ps->pTop ;
	 	
		ps->pTop = ps->pTop->pNode ;
	 	free(p);
	 	p = NULL;
	 }
	 }
	 
	return; 
}
