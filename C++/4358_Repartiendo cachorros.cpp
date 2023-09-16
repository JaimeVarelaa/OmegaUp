#include <iostream>

using namespace std;

int main()
{
    int C, P, H, restantes, aux;

    cin >> C >> P >> H;
    restantes = C - P;
    aux = restantes / (H + 1);
    aux = aux * (H + 1);
    aux = restantes - aux;
    cout << P + aux;
}