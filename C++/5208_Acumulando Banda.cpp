#include <iostream>

using namespace std;

int v1,v2,v3,v4,v5,K,l;
int main()
{
	cin>>v1;
	cin>>v2;
	cin>>v3;
	cin>>v4;
	cin>>v5;
    cin>>l;
     if(l==1)
     {
         cout<<v1<<endl;
     }
     if(l==2)
     {
         cout<<v1+v2<<endl;
     }
     if(l==3)
     {
         cout<<v1+v2+v3<<endl;
     }
     if(l==4)
     {
         cout<<v1+v2+v3+v4<<endl;
     }
     if(l==5)
     {
         cout<<v1+v2+v3+v4+v5<<endl;
     }


 return 0;
}