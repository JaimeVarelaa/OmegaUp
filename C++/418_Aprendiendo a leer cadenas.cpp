#include <iostream>
#include<string.h>

using namespace std;

int main(){
    string s;
    int N;
    cin>>N;
    getline(cin,s);
    for(int a=0;a<N;a++){
    getline(cin,s);
                cout<<"\""<<s<<"\""<<" tiene "<<s.size()<<" caracteres"<<endl;
    }
    return 0;
}