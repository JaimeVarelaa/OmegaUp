#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    string text;
    map<char, int> count;

    cin >> a >> b;
    cin.ignore();
    getline(cin, text);

    for (char letter = 'a'; letter <= 'z'; letter++)
    {
        count[letter] = 0;
    }

    vector<char> letter(text.begin(), text.end());

    for (int i = a; i <= b; i++)
    {
        count[letter[i]]++;
    }

    for (const auto &par : count)
    {
        cout << par.first << "=" << par.second << endl;
    }
}