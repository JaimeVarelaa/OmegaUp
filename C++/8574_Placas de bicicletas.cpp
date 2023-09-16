#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e=1,f=1;
    cin>>a>>b>>c>>d;
    b = b-a+1;
    for (int i = b; i >  b-3 ; i--) {
        e *= i;
    }
    d = d-c+1;
    for (int i = d; i > d-2; i--) {
        f *= i;
    }
    
    cout << e*f;
    
    return 0;
}
