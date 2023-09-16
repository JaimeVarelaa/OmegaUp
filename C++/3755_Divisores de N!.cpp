#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
 

vector<ull> allPrimes;
 
void sieve(long long int n)
{
    vector<bool> prime(n+1, true);
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
        if (prime[p])
            allPrimes.push_back(p);
}
 ull factorialDivisors(ull n)
{
    sieve(n);
     ull result = 1;
    for (int i=0; i < allPrimes.size(); i++)
    {
        ull p = allPrimes[i];
        ull exp = 0;
        while (p <= n)
        {
            exp = exp + (n/p);
            p = p*allPrimes[i];
        }
        result = result*(exp+1);
    }
    return result;
}
 int main()
{
	long long int c=0;
	cin>>c;
    long long int a=factorialDivisors(c);
    a=a%987654321;
    cout<<(a)<<"\n";
    return 0;
}