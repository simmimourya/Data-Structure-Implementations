#include<iostream>
#include<limits.h>
using namespace std;

void degree(int adj[20][20],int nodes){
	int i,j,indeg[20],trans[20][20];
	for(i=0;i<nodes;i++){
		indeg[i]=0;
		for(j=0;j<nodes;j++){
			trans[i][j]=adj[j][i];
			if(trans[i][j]==1){
				indeg[i]++;
			}
		}
		std::cout<<"The degree for vertex V"<<i+1<<" is :"<<indeg[i]<<endl;
	}
	
		
}
int main(){
	int nodes,i,j;
	std::cout<<"Enter the no. of nodes you want to enter\n"<<endl;
	std::cin>>nodes;
	int adj[20][20];
	std::cout<<"enter adjacency matrix for your graph row wise"<<endl; 
	for(i=0;i<nodes;i++){
		std::cout<<"Enter "<<i+1<<" row:"<<endl;
		for(j=0;j<nodes;j++){
			std::cin>>adj[i][j];
		}
		
	}
	degree(adj,nodes);
		
}

