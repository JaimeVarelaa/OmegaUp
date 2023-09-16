#include <iostream>

using namespace std;
int a,b,m=0;
int main(){
cin>>a;
for (int i=0;i<a;i++){
    cin>>b;
    if(b>m){
        m=b;
    }
}
 cout<<m<<endl;
 return 0;
 }