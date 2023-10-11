#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>


struct Arr{
	int *pBase; // 存储数组第一个元素的地址 
	int len;    //数组所能容纳元素的最大个数 
	int cnt;	//当前数组有效值的个数 
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
		printf("动态内存分配失败！\n");
		exit(-1);
	}else{
		printf("创建成功！\n");
		
		pArr->len =length;
		pArr->cnt =0;
	}
	return ;

}

void show_arr(struct Arr *pArr){
	
	
}

bool is_empty(){
	
}

