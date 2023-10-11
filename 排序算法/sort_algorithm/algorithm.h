#ifndef ALGORITHM
#define ALGORITHM

typedef int intbool;
#define TRUE 1
#define FLASE 0
	
#define MAXSIZE 10 //


	
typedef struct {
	
	int r[MAXSIZE+1];
	int length;
}SqList;

void swap(SqList* L, int i, int j);
void BubbleSort(SqList* L);

#endif ALGORITHM

