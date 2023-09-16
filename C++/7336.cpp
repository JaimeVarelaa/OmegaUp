#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isBlank(char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}

bool isL1(const string& word)
{
    bool found_a = false;
    bool found_b = false;

    for (char c : word)
    {
        if (c == 'a')
            found_a = true;
        else if (c == 'b')
            found_b = true;

        if (found_a && found_b)
            return true;
    }

    return false;
}

bool isL2(const string& word)
{
    int count_xz = 0;
    int count_xy = 0;

    for (int i = 0; i < word.length() - 1; i++)
    {
        if (word[i] == 'x' && word[i + 1] == 'z')
            count_xz++;
        else if (word[i] == 'x' && word[i + 1] == 'y')
            count_xy++;
    }

    return count_xz > 0 && count_xz == count_xy;
}

int main()
{
    string input;
    getline(cin, input);

    vector<string> words;
    string word;

    for (char c : input)
    {
        if (isBlank(c))
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        else
        {
            word += c;
        }
    }

    if (!word.empty())
    {
        words.push_back(word);
    }

    for (const string& w : words)
    {
        if (isBlank(w[0]))
        {
            cout << "BLANK" << endl;
        }
        else if (isL2(w))
        {
            cout << "L2" << endl;
            cout << "BLANK" << endl;
        }
        else if (isL1(w))
        {
            cout << "L1" << endl;
            cout << "BLANK" << endl;
        }
        else
        {
            for (char c : w)
            {
                cout << "ERROR" << endl;
            }
            cout << "BLANK" << endl;
        }
    }

    return 0;
}
