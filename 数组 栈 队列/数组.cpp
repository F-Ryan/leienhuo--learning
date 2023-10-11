#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>



struct Arr{
	int *pBase; // �洢�����һ��Ԫ�صĵ�ַ 
	int len;    //������������Ԫ�ص������� 
	int cnt;	//��ǰ������Чֵ�ĸ��� 
};
	int i;
void init_arr(struct Arr *pArr,int length);
bool append_arr(struct Arr *pArr,int value);
bool insert_arr(struct Arr *pArr,int pos,int value);//1.over pos��1��ʼ 
bool delete_arr(struct Arr *pArr,int pos,int* pval);//2.over int*����ɾ��ֵ (pos��1��ʼ )
int get();
bool is_empty(struct Arr *pArr);
bool is_full(struct Arr *pArr);
void show_arr(struct Arr *pArr);
void sort_arr(struct Arr *pArr);//4.ð�� ��С�������� 
void inversion_arr(struct Arr *pArr);//3.over



int main(){
	struct Arr arr;/*	struct Arr *arr; *arr ����ָ������������ʹ�������������ޱ��� 
	
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
		printf("��������\n");
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
	
	if(is_empty(pArr)){
		printf("����Ϊ��\n");
		
	}else{
		int i;
		for(i =0;i<pArr->cnt ;i++){
			printf("%d ",pArr->pBase[i]);
		}
	}
	
}
bool append_arr(struct Arr *pArr,int value){
	if(is_full(pArr)){
		return false; //����false�����false==0 
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
void sort_arr(struct Arr *pArr) {//��С��������
	
	int i,j,t;
	for(i=0;i<pArr->cnt ;++i){
		for(j=i+1;j<pArr->cnt;++j){ //j=i+1ע�� 
			while(	pArr->pBase [i]>pArr->pBase [j]){ //��������ֱ����� 
			t=pArr->pBase [i];
			pArr->pBase [i] = pArr->pBase [j];
			pArr->pBase [j] = t;
			}
		}
	}
 
	return ;
}
