#include <iostream>
using namespace std;
long a,b;
int main()
{
 cin>>a;
 cin>>b;

 if(a<b)
 {
     cout<<"1"<<" "<<b-a<<endl;
 }
 if(a>b)
 {
     cout<<"2"<<" "<<a-b<<endl;
 }
 if(a==b)
    {
    cout<<"Nivel Optimo"<<endl;
 }

 return 0;
}