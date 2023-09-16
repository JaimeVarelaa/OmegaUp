#include <iostream>

using namespace std;
int a=0,b=0,c=0,aa=0,ab=0,ac=0,d=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a;
	cin>>d;

	 for(int i=0; i<d; i++){
		aa=0;
		ab=0;
		ac=0;
		aa+=1*a;
		ab+=3*a;
		ac+=1*a;
		ab+=2*b;
		ac+=2*b;
		aa+=1*c;
		ac+=4*c;
		a+=aa;
		b+=ab;
		c+=ac;
	}
	cout<<a+b+c;
	return 0;
}