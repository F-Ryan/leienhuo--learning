#include<stdio.h> //queue ����
#include<malloc.h>
#include<stdlib.h>
typedef struct queue{
	int *pBase;
	int front;
	int rear;
}QUEUE; 

void init(QUEUE*);  //��ʼ�� 
bool en_queue(QUEUE*,int val);//��� 
void traverse(QUEUE*); //��������������� 
bool full_queue(QUEUE*); //�ж��� 
bool out_queue(QUEUE*,int* pval); //���ӣ�����ֵ���浽pval
bool empty_queue(QUEUE*); 


int main(void){
	
	QUEUE q;
	int num;
	
	init(&q);
	en_queue(&q,1);
	en_queue(&q,2);
	en_queue(&q,3);
	en_queue(&q,4);
	en_queue(&q,5);
	en_queue(&q,6);
	out_queue(&q,&num);
	printf("%d\n",num);
	
	traverse(&q);
	
	
	return 0;
}
void init(QUEUE *pQ){
	pQ->pBase = (int*)malloc(sizeof(int)*6);
	
	pQ->front = 0;
	pQ->rear = pQ->front ;
	
	return;	
}
bool full_queue(QUEUE *pQ){
	if((pQ->rear+1)%6 == pQ->front)
			return true;
		else
			return false;
}
bool empty_queue(QUEUE* pQ){
	
	if(pQ->front == pQ->rear)
			return true;
	else
			return false;
	
}
bool en_queue(QUEUE* pQ,int val){ //��� 
	if(full_queue(pQ)){
		printf("���ʧ�ܣ�\n");
		return false;
	}
	else{	
		pQ->pBase[pQ->rear] = val ;
		pQ->rear = (pQ->rear+1)%6; 
		return true; 
	}
	
}
bool out_queue(QUEUE* pQ,int* pval){ //����
	if(empty_queue(pQ)){
		return true;
	}else{
		*pval =  pQ->pBase[pQ->front];
		pQ->front = (pQ->front+1)%6;
		
		return false;
	}
}
void traverse(QUEUE* pQ){
	
	if(empty_queue(pQ)){		
		printf("���󣡶���Ϊ��\n");
	}
	else{
		int i = pQ->front;
		while(i != pQ->rear ){
			
			printf("%d ",pQ->pBase[i]);
			i=(i+1)%6;
		}
	}
	
	return;	
}

