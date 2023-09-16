#include <iostream>

using namespace std;
int n,b,cont;
float xd;
int main(){
    cin>>n;
    xd=0;
    cont=0;
    while(cont<n)
    {
      cin>>b;
      if(b>xd)
      {
          xd=b;
      }
      else{
        cout<<"No"<<endl;
      return 0;}
      cont=cont+1;
    }
    cout<<"Si"<<endl;

 return 0;
 }