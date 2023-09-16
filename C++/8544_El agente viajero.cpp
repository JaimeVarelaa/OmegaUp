#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int costoMinimo = INT_MAX;
vector<vector<int>> matriz;

void ramificacionPoda(int inicio, vector<int> &visitados, int costoTotal, int visitadosCount)
{
    if (visitadosCount == N)
    {
        costoMinimo = min(costoMinimo, costoTotal);
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (visitados[i] == 0)
        {
            if (costoTotal + matriz[inicio][i] < costoMinimo)
            {
                visitados[i] = 1;
                ramificacionPoda(i, visitados, costoTotal + matriz[inicio][i], visitadosCount + 1);
                visitados[i] = 0;
            }
        }
    }
}

int main()
{
    cin >> N;
    matriz.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        vector<int> visitados(N, 0);
        visitados[i] = 1;
        ramificacionPoda(i, visitados, 0, 1);
    }

    cout << costoMinimo << endl;

    return 0;
}
