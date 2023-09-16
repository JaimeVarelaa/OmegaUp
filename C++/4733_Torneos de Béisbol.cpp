#include <iostream>

using namespace std;

   long N,K,R,T;
int main()
{

    cin>>N;
    cin>>K;

    while(N>0)
    {
        N=N-1;
        R=N*K;
        T=T+R;
    }
    cout<<T<<endl;
    return 0;
}