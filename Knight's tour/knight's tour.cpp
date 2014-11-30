#include<iostream>
using namespace std;
int main(){
	
	int i,j,k=1,n;
	cout<<"Enter size of the chess board"<<endl;
	cin>>n;
	int m,M=n*n-1;
	int** G=new int*[n];
	for(i = 0; i < n; ++i)
    	G[i] = new int[n];
		
	int** tour=new int*[n];
	for(i = 0; i < n; ++i)
    	tour[i] = new int[n];
	//Assigning numbers to the graph
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			G[i][j]=k;
			k++;
		}
	}
	
	int knight=G[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			while(m<M){
				
			}
			
		}
	}
	
	for(i=0;i<n;i++){
		cout<<"\n";
		for(j=0;j<n;j++){
			cout<<G[i][j]<<" ";
		}
	}	 
	return 0;
}

