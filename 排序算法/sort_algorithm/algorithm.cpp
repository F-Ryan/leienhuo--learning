#include<iostream>
#include "algorithm.h"
using namespace std;
//一个一个写吧

void swap(SqList* L, int i, int j){
	
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;

}
 
//1.冒泡排序，最快的 flag
void BubbleSort(SqList* L){
	
	int i, j;
	intbool flag = TRUE;

	for (i = 1; i < L->length && flag == TRUE; i++) {
		//cout << "3" << endl;
		flag = FLASE;
		for (j = L->length - 1; j > i; j--) {
			//cout << "4" << endl;
			if (L->r[j] > L->r[j + 1]) {
				cout << 5<< endl;
				swap(L, L->r[j], L->r[j + 1]);
				flag = TRUE;
			}
		}
	}
	
}
