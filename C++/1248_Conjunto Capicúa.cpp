#include <iostream>

using namespace std;

long ar[1000],N,k,kk,con;
int main()
{
    cin>>N;
    con=0;
    k=0;
    kk=1;
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    int n=N/2;
    while(k<n){
        if(ar[k]==ar[N-kk])
        {
            k+=1;
            kk+=1;
            con=con+1;
        }
        else
        {
            break;
        }
    }
    if(con==n)
        cout<<"SI"<<endl;
    else
        cout<<"NO"<<endl;

 return 0;
}