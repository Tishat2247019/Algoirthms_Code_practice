#include <bits/stdc++.h>
using namespace std;

void printGrap(int **mat, int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int v, e;
    cout << "Enter vertex & edges: ";
    cin >> v >> e;

    int **mat = new int *[v];
    for (int i = 0; i < v; i++)
        mat[i] = new int[v];

    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            mat[i][j] = 0;

    int u1, u2;
    for (int i = 0; i < e; i++)
    {

        cin >> u1 >> u2;
        mat[u1][u2] = mat[u2][u1] = 1;
    }

    printGrap(mat, v);

    return 0;
}