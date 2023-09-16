#include <iostream>
#include <vector>

using namespace std;

int parts(int n, int m, vector<vector<int>>& memo)
{
    if (n == 0)
    {
        return 1;
    }

    if (memo[n][m] != -1)
    {
        return memo[n][m];
    }

    int counter = 0;

    for (int i = min(n, m); i >= 1; i--)
    {
        counter += parts(n - i, i, memo);
    }

    memo[n][m] = counter;

    return counter;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> memo(n + 1, vector<int>(n + 1, -1));

    int counter = parts(n, n, memo);

    cout << counter << endl;

    return 0;
}
