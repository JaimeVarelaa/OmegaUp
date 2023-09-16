#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a, b, sum = 0, x;
    int output = 0;
    char option;
    bool reversed = false;

    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<int> vectorO = vec;
    reverse(vec.begin(), vec.end());
    vector<int> vectorI = vec;
    reverse(vec.begin(), vec.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> option;

        switch (option)
        {
        case 'C':
            cin >> a;
            cin >> b;
            output = 0;
            for (int j = a; j <= b; j++)
            {
                output += vec[j];
            }
            cout << output + sum << endl;
            break;
        case 'S':
            cin >> x;
            sum += x;
            break;
        case 'O':
            if (reversed)
            {
                vec = vectorO;
                reversed = false;
            }
            else
            {
                vec = vectorI;
                reversed = true;
            }
            break;
        }
    }

    return 0;
}