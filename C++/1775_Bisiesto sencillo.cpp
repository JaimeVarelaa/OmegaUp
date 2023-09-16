#include <iostream>
using namespace std;
int main(){
int N;
cin>>N;
if (N%4==0)
{
    if(N%100==0)
    {
        if(N%400==0)
            cout<<"S"<<endl;
            else
                cout<<"N"<<endl;
    }
    cout<<"S"<<endl;
}
else
    cout<<"N"<<endl;
return 0;
}