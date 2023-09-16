#include <iostream>

using namespace std;

int main()
{
    int n, size, aux = 0, aux2 = 0;
    char type;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> type >> size;
        if (type == 'e')
        {
            if (size > aux)
            {
                aux = size;
            }
        }
        else
        {
            if (size > aux2)
            {
                aux2 = size;
            }
        }
    }

    if (aux > 0)
    {
        cout << "e " << aux;
    }
    else
    {
        cout << "t " << aux2;
    }
    return 0;
}