#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>


struct Arr{
	int *pBase; // �洢�����һ��Ԫ�صĵ�ַ 
	int len;    //������������Ԫ�ص������� 
	int cnt;	//��ǰ������Чֵ�ĸ��� 
};

void init_arr(struct Arr *pArr,int length);
void show_arr(struct Arr *pArr);
bool append_arr();
bool insert_arr();
bool delete_arr();
int get();
bool is_empty();
bool is_full();
void sort_arr();
void inversion_arr();



int main(){
	struct Arr *arr;
	
	init_arr(&arr);
	show_arr(&arr);
}

void init_arr(struct Arr *pArr,int length)
{
	pArr->pBase  = (int*)malloc(sizeof(int)*length);
	
	if(pArr->p == NULL){
		printf("��̬�ڴ����ʧ�ܣ�\n");
		exit(-1);
	}else{
		printf("�����ɹ���\n");
		
		pArr->len =length;
		pArr->cnt =0;
	}
	return ;

}

void show_arr(struct Arr *pArr){
	
	
}

bool is_empty(){
	
}

