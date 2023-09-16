#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int a, b, c;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a;
	vector<int> milista{1, 2, 3};
	 for(int i=0; i<a; i++){
		cin>>b;
		c=milista[0];
		if(b>c){
			milista.erase(milista.begin());
			milista.push_back(b);
			sort(milista.begin(), milista.end());
		}
	}
	cout<<milista[0];
	return 0;
}