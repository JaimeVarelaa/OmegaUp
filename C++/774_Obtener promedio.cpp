#include <iostream>
#include <iomanip>

using namespace std;
int n,b,cont;
float aux;
int main(){
    cin>>n;
    aux=0;
    cont=0;
    while(cont<n)
    {
      cin>>b;
      aux=aux+b;
      cont=cont+1;
    }
    aux=aux/n;
    cout<<fixed<<setprecision(2)<<aux<<endl;
 return 0;
 }