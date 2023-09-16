#include <iostream>

using namespace std;

long p,s,r,d;
int main()
{
	cin>>p;
    cin>>s;
    cin>>r;
    d=0;
    p=p-s;
   d=s-r;
    cout<<1+(p+d-1)/d<<endl;

 return 0;
}