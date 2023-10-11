#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0
#define TURE 1
#define FALSE 0
#define MAXSIZE 20  //栈的长度 

typedef int Status; //用作define OK等的返回 
typedef int SElement; //用于data 的数据类型的改变

typedef struct Tstack{
	SElement data[MAXSIZE];
	int top1;
	int top2;
}TSTACK,*PTSTACK;

Status push(PTSTACK ps,SElement e,int stackNum);//stackNum 1用top1，2用top2 
Status pop(PTSTACK ps,SElement *e,int stackNum); //出栈 存入e
bool empty(PTSTACK ps);//检测栈是否为空 
 

int main(void){
	TSTACK S;
	
	S.top1 = -1;
	S.top2 = MAXSIZE; //初始化S
	
	push(&S,1,1);
	push(&S,2,1);
	push(&S,3,1);
	push(&S,4,1);
	push(&S,1,2);
	push(&S,2,2);
	push(&S,3,2);
	push(&S,4,2);
	int n1,n2;
	pop(&S,&n1,1);
	printf("%d ",n1);
	pop(&S,&n2,2);
	printf("%d ",n2);
	 
	return 0;
}
bool empty(PTSTACK ps){
	if(ps->top1 == -1 || ps->top2 == MAXSIZE)
		return true;
	else
		return false;
}

Status push(PTSTACK ps,SElement e,int stackNum){
	if(ps->top1+1 == ps->top2 ){  //判断栈是否满 
		return ERROR;}
	if(stackNum == 1){
		ps->data[++ps->top1] = e;
		
		return OK;
	}
	if(stackNum == 2){
		ps->data[--ps->top2] = e;
		
		return OK;
	}
	
}
Status pop(PTSTACK ps,SElement *e,int stackNum){
	if(empty(ps)){
		return ERROR;
	}
	if(stackNum == 1){
		*e = ps->data[ps->top1--];
		
		return OK;
	}
	if(stackNum == 2){
		*e = ps->data[ps->top2++];
		
		return OK;
	}
}
