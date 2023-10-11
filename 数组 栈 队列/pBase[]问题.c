#include <stdio.h>
struct Arr{
	int *pBase;
	int len;
	int cnt;
};
int test(struct Arr *q){
	int i;
	for(i=0;i<5;i++){
		q->pBase[i] =i;
		printf("%d ",q->pBase);
	}	
}
int main(void){
	
	struct Arr arr;
	int *a;
	int i;

	test(&arr);
	
	return 0;
}
