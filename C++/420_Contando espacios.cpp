#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    int N,con;
    con=0;
    cin>>N;
    getline(cin,s);
    for(int a=0;a<N;a++){
    getline(cin,s);
        for(int i=0;i<s.size();i++){
                if(s[i]==' '){
                    con+=1;
                }
            }
            cout<<con<<endl;
            con=0;
    }
    return 0;
}