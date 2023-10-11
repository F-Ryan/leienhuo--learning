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

void init(PSTACK ps); //初始化栈 
bool push(PSTACK ps,SElement val); //将val入栈 
bool pop(PSTACK ps,SElement *pval); //出栈，并将值保存到pval 
bool empty(PSTACK ps); //检验栈是否为空 
void traverse(STACK *ps); //遍历整个栈，并输出栈中的值 
void clear(STACK *ps); //清空栈 

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
		printf("栈创建失败！\n");
		exit(-1);
	}else{
		printf("栈创建成功！\n");
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
	 	printf("栈为空！\n");
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
	 	printf("栈为空！\n");
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
