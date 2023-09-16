#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, aux;
    vector<string> pi;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if (aux >= 3)
        {
            pi.push_back("Ok");
        }
        else
        {
            pi.push_back("No");
        }
    }

    for (int i = 0; i < pi.size(); i++)
    {
        cout << pi[i] << endl;
    }

    return 0;
}