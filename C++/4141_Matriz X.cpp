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
for(int a=M-1;a>0-1;a--){
    for(int b=0;b<N;b++){
    	if(a%2==0 && b%2==0){
    		cout<<mat[a][b]<<" ";
		}
    }
}

return 0;
}