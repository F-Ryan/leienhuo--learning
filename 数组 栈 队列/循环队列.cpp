#include<stdio.h> //queue 队列
#include<malloc.h>
#include<stdlib.h>
typedef struct queue{
	int *pBase;
	int front;
	int rear;
}QUEUE; 

void init(QUEUE*);  //初始化 
bool en_queue(QUEUE*,int val);//入队 
void traverse(QUEUE*); //遍历输出整个队列 
bool full_queue(QUEUE*); //判断满 
bool out_queue(QUEUE*,int* pval); //出队，并将值保存到pval
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
bool en_queue(QUEUE* pQ,int val){ //入队 
	if(full_queue(pQ)){
		printf("入队失败！\n");
		return false;
	}
	else{	
		pQ->pBase[pQ->rear] = val ;
		pQ->rear = (pQ->rear+1)%6; 
		return true; 
	}
	
}
bool out_queue(QUEUE* pQ,int* pval){ //出队
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
		printf("错误！队列为空\n");
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

