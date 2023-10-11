#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct Node{
	int Date; //������ 
	struct Node *pNode;//ָ���� 
}NODE, *PNODE; //NOTE�ȼ���struct Node;*PNOTE�ȼ���struct Node*

PNODE creat_list();
void traverse_list(PNODE pHead);
bool is_empty(PNODE);
int length_list(PNODE);
bool insert_list(PNODE,int pos,int num);
bool delete_list(PNODE,int pos,int *val);
void soert_list(PNODE);

int main(void){
	PNODE pHead = NULL;
	
	pHead = creat_list();
	traverse_list(pHead);
	
	return 0;
}  

PNODE creat_list(){
	int len;
	int i;
	int val;
	PNODE pHead ;
	PNODE pTail,pNew;
	
	pHead = (PNODE)malloc(sizeof(NODE)); //����һ����������Чֵ��ͷָ�� 
	pTail = pHead;
	pTail->pNode = NULL;
	if(pHead == NULL){
		printf("����ʧ��");
		exit(-1); 
	}
	
	printf("���������봴��Ľڵ������ ");
	scanf("%d",&len);
	
	for(i=0;i<len;++i){
		printf("�������%d���ڵ��ֵ�� ",i+1);
		scanf("%d",&val);
		
		pNew = (PNODE)malloc(sizeof(NODE));
		while( pNew == NULL ){
			printf("error!");
			exit(-1); 
		}
		pNew->Date = val;
		pNew->pNode =NULL;
		pTail->pNode = pNew ;
		pTail = pNew ;
		}
		return pHead;
}
void traverse_list(PNODE pHead){
	PNODE p = pHead->pNode ;
	
	while( p!= NULL ){
		
		printf("%d ",p->Date );
		p = p->pNode ;
	}
	printf("\n");
	
	return ;
	
}
