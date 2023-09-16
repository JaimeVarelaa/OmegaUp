#include <iostream>
using namespace std;

int main(){
	int mat[105][105];
	int M,N;
	cin>>M;
	cin>>N;
	for(int a=0;a<M;a++){
		for(int b=0;b<N;b++){
			cin>>mat[a][b];
		}
	}
	for(int a=0;a<M;a++){
		for(int b=N-1;b>0-1;b--){
			cout<<mat[a][b]<<" ";
		}
		cout<<endl;
	}
return 0;
}