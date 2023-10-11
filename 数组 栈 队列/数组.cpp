#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>



struct Arr{
	int *pBase; // 存储数组第一个元素的地址 
	int len;    //数组所能容纳元素的最大个数 
	int cnt;	//当前数组有效值的个数 
};
	int i;
void init_arr(struct Arr *pArr,int length);
bool append_arr(struct Arr *pArr,int value);
bool insert_arr(struct Arr *pArr,int pos,int value);//1.over pos从1开始 
bool delete_arr(struct Arr *pArr,int pos,int* pval);//2.over int*返回删除值 (pos从1开始 )
int get();
bool is_empty(struct Arr *pArr);
bool is_full(struct Arr *pArr);
void show_arr(struct Arr *pArr);
void sort_arr(struct Arr *pArr);//4.冒泡 从小到大重排 
void inversion_arr(struct Arr *pArr);//3.over



int main(){
	struct Arr arr;/*	struct Arr *arr; *arr 不能指向正常变量，使得整个程序中无变量 
	
						init_arr(arr, 6);
						show_arr(arr);*/
	init_arr(&arr, 6);
	show_arr(&arr);
	append_arr(&arr,1);
	append_arr(&arr,2);
	append_arr(&arr,3);
	append_arr(&arr,4);
	append_arr(&arr,5);
	append_arr(&arr,6);
	//append_arr(&arr,1);
	show_arr(&arr);
	
	if(append_arr(&arr,1)){
		printf("数组已满\n");
	}
	

}
bool is_empty(struct Arr *pArr)
{
	if(pArr->cnt == 0){
		return true;
	}else{
		return false;
	}
	
}
bool is_full(struct Arr *pArr){
	
	if(pArr->cnt ==pArr->len )
		return true;
	else
		return false;
	
}
	
	

void init_arr(struct Arr *pArr,int length)
{
	pArr->pBase  = (int*)malloc(sizeof(int)*length);
	
	if(pArr->pBase == NULL){
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
	
	if(is_empty(pArr)){
		printf("数组为空\n");
		
	}else{
		int i;
		for(i =0;i<pArr->cnt ;i++){
			printf("%d ",pArr->pBase[i]);
		}
	}
	
}
bool append_arr(struct Arr *pArr,int value){
	if(is_full(pArr)){
		return false; //尝试false结果：false==0 
	}else{
		pArr->pBase[pArr->cnt ] = value ;
		++pArr->cnt; 
	}
}
bool insert_arr(struct Arr *pArr,int pos,int value){
	if(is_full(pArr))
		return false;
	if(pos<1||pos>pArr->len )
		return false;
		
	int i;
	for(i=pArr->cnt ;i>pos ;--i){
		pArr->pBase [i] = pArr->pBase [i-1];
	}
	pArr->pBase [pos] = value;
	return true;
}
bool delete_arr(struct Arr *pArr,int pos,int* pval){
	if(is_empty(pArr))
		return false;
	if(pos<1||pos>pArr->cnt )
		return false;
	
	*pval = pArr->pBase [pos];
	for(i=pArr->cnt ;i>pos;i--){
		pArr->pBase [i-1] = pArr->pBase [i];
	}
	return true;
}
void inversion_arr(struct Arr *pArr){

	int i=0,j=pArr->cnt -1,t;
	while(i<j){
		t=pArr->pBase [i];
		pArr->pBase [i] = pArr->pBase [j];
		pArr->pBase [j] = t;
		++i;
		--j;
	}
	return ;
}
void sort_arr(struct Arr *pArr) {//从小到大排序
	
	int i,j,t;
	for(i=0;i<pArr->cnt ;++i){
		for(j=i+1;j<pArr->cnt;++j){ //j=i+1注意 
			while(	pArr->pBase [i]>pArr->pBase [j]){ //交换不是直接替代 
			t=pArr->pBase [i];
			pArr->pBase [i] = pArr->pBase [j];
			pArr->pBase [j] = t;
			}
		}
	}
 
	return ;
}
