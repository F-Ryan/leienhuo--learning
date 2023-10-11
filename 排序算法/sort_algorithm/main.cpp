#include<iostream>
#include "algorithm.h"
using namespace std;

int main() {
	// 3,
	int i;
	int a[] = {0, 9, 1, 5, 8, 7, 4, 6, 2};
	SqList L;
	L.length = 8;
	//L.r[] = ;
	//L.r[] = a[];

	for (i = 1; i <= L.length; i++){
		//cout << "1" << endl;
		L.r[i] = a[i];
	}

	int n;
	for (n = 1; n <= L.length; n++) {
		cout << n << endl;
	}

	BubbleSort(&L);

	
	for (n = 1; n <= L.length; n++) {
		cout << n << endl;
	}
	for (i = 1; i <= L.length; i++) {
		cout << "2" << endl;
		cout << L.r[i] << endl;
	}

	return 0;
}