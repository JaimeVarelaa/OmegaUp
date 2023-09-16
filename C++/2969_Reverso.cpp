#include <iostream>

using namespace std;

long ar[1000],N,a;
int main()
{
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    for(int i=N-1;i>-1;i--)
    {
        cout<<ar[i]<<" ";
    }
 return 0;
}