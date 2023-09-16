#include <iostream>

using namespace std;

int main()
{
    int everage = 0, top = 0, n;

    for (int i = 0; i < 7; i++)
    {
        cin >> n;
        everage += n;
        if (n > top)
        {
            top = n;
        }
    }
    cout << everage / 7 << endl
         << top;

    return 0;
}