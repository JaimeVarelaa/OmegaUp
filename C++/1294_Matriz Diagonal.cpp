#include <iostream>

using namespace std;
int main(){
int mat[105][105];
int N,C;
cin>>N;
C=1;
for(int a=0;a<N;a++){
    for(int b=0;b<N;b++){
        cin>>mat[a][b];
    }
}
for(int a=0;a<N;a++){
    if(mat[a][a]==mat[a+1][a+1])
            C+=1;
}
if(C==N)
    cout<<"SI";
else
    cout<<"NO";

return 0;
}