#include <iostream>

using namespace std;
int main(){
int mat[55][55];
int F,C;
cin>>F;
cin>>C;
for(int a=0;a<F;a++){
    for(int b=0;b<C;b++){
        cin>>mat[a][b];
    }
}
for(int a=F-1;a>=0;a--){
    for(int b=0;b<C;b++){
        cout<<mat[a][b]<<" ";
    }
    cout<<endl;
}
return 0;
}