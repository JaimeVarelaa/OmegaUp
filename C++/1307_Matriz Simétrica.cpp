#include <iostream>

using namespace std;
int main(){
int mat[55][55];
int N,x,y;
x=0;
y=0;
cin>>N;
for(int a=0;a<N;a++){
    for(int b=0;b<N;b++){
        cin>>mat[a][b];
    }
}
for(int b=0;b<N;b++){
    for(int a=0;a<N;a++){
            x+=1;
    if(mat[a][b]==mat[b][a])
        y+=1;
    }
}
if(x==y)
    cout<<"SI";
else
    cout<<"NO";
return 0;
}