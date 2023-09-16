#include <iostream>
long long int mat[1000][1000];
using namespace std;
int main(){

long n;
cin>>n;
for(int a=0;a<n;a++){
    for(int b=0;b<n;b++){
        cin>>mat[a][b];
    }
}
for(int b=0;b<n;b++){
    for(int a=n-1;a>0-1;a--){
        cout<<mat[a][b]<<" ";
    }
    cout<<endl;
}

return 0;
}