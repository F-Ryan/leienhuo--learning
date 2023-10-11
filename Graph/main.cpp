#include<stdio.h>
#include<iostream>
#include"DFS_Graph.h"
#include"CreateMGraph.h"
#include "GreateGraphAdjList.h"

using namespace std;

int main(){

	/*MGraph G;

	CreateMGraph(&G);
	DFS_MTravel(G);*/

	GraphAdjList G;

	CreateGraphAdjList(&G);

	DFS_ALTravel(G);

	return 0;
}