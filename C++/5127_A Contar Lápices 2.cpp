#include <iostream>

using namespace std;
int N,K,cont,nb,cont2;
int main(){
    cin>>N;
     cin>>K;
    cont=0;
    cont2=0;
    while(cont<N)
    {
      cin>>nb;
      if(nb==K)
      {
          cont2=cont2+1;
      }
      cont=cont+1;
    }
    cout<<cont2<<endl;

 return 0;
 }