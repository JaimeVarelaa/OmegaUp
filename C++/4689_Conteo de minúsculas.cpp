#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    int con=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            con+=1;
    }
    cout<<con<<" minusculas";
    return 0;
}