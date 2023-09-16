#include <iostream>

using namespace std;
int main(){
int mat[205][205];
int M,N,con;
 cin>>M;
 cin>>N;
 con=0;
 for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        cin>>mat[i][j];
    }
 }

 for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        mat[i][j];

        if(i-1>=0){
            if(mat[i-1][j]==1)
                con+=1;
        }
        if(i+1<M){
            if(mat[i+1][j]==1)
                con+=1;
        }
        if(j-1>=0){
            if(mat[i][j-1]==1)
                con+=1;
        }
        if(j+1<N){
            if(mat[i][j+1]==1)
                con+=1;
        }
        if(j-1>=0 && i-1>=0){
                if(mat[i-1][j-1]==1)
                    con+=1;
        }
        if(j+1<N && i-1>=0){
                if(mat[i-1][j+1]==1)
                    con+=1;
        }
        if(j-1>=0 && i+1<M){
                if(mat[i+1][j-1]==1)
                    con+=1;
        }
        if(j+1<N && i+1<M){
                if(mat[i+1][j+1]==1)
                    con+=1;
        }
        if(mat[i][j]==1)
            con+=1;
        //mat[i][j];
        cout<<con<<" ";
        con=0;
    }
    con=0;
    cout<<endl;
 }

return 0;
}