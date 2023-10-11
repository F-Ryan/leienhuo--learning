#include<stdio.h>
#include<stdlib.h> 

#define OK 1
#define ERROR 0
#define TURE 1
#define FALSE 0
#define MAXSIZE 20  //ջ�ĳ��� 

typedef int Status; //����define OK�ȵķ��� 
typedef int SElement; //����data ���������͵ĸı�

typedef struct {
	SElement data[MAXSIZE];
	int Top;
}STACK,*PSTACK;

Status push(PSTACK ps,SElement e); //��eѹջ
Status pop(PSTACK ps,SElement *e);
Status traverse(PSTACK ps);

int main(){
	STACK S;
	int num;
	
	S.Top = -1; //��ʼ��ջ 
	
	push(&S,1);
	push(&S,2);
	push(&S,3);
	push(&S,4);
	push(&S,5);
	pop(&S,&num);
	printf("%d\n",num);
	traverse(&S);
	
	return 0;
} 

Status push(PSTACK ps,SElement e){
	if(ps->Top == MAXSIZE-1)
		return ERROR;
	else
		++ps->Top ;
		ps->data[ps->Top] = e;
		
		return OK;
}

Status pop(PSTACK ps,SElement *e){
	if(ps->Top == -1)
		return ERROR;
	else
		*e = ps->data[ps->Top--];
		return OK;
}
Status traverse(PSTACK ps){
	if(ps->Top == -1)
		return ERROR;
	else 
		while(ps->Top != -1){
			printf("%d ",ps->data[ps->Top--]);
		}
		return OK;
		
}
