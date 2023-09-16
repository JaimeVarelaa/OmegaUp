#include <iostream>
#include <iomanip>
using namespace std;
double a,b=0;
int main()
{
    for(int i=0; i< 12; i++){
        cin>>a;
        b += a;
    }
    b/=12;
    cout<<"$"<<fixed<<setprecision(2)<<b<<endl;
    return 0;
}