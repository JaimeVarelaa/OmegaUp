#include <iostream>

using namespace std;

int main()
{
    int A, B, C, aux, count = 0;
    cin >> A >> B >> C;

    if (A > B)
    {
        if (A > C)
        {
            aux = A;
            A = C;
            C = aux;
            count++;
        }
        else
        {
            aux = A;
            A = B;
            B = aux;
            count++;
        }
    }

    if (B > C)
    {
        aux = B;
        B = C;
        C = aux;
        count++;
    }

    if (A > B)
    {
        if (A > C)
        {
            aux = A;
            A = C;
            C = aux;
            count++;
        }
        else
        {
            aux = A;
            A = B;
            B = aux;
            count++;
        }
    }

    cout << count;

    return 0;
}