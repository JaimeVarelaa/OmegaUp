#include <iostream>

using namespace std;

long ar[1000];
long N,B,con;
int main()
{
    con=0;
    cin>>N;
   for(int i=0;i<N;i++)
   {
        cin>>ar[i];
   }
   cin>>B;
   for(int i=N;i>0;i--)
   {
       if(ar[i]==B)
       {
           con+=1;
       }
   }
   cout<<con<<endl;
 return 0;
}