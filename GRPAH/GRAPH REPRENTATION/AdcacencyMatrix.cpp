#include <bits/stdc++.h>
using namespace std;

void printGraph(int **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int node, edge;
    cout << "Enter the number of node and edges of the undirected graph: ";
    cin >> node >> edge;

    // Dynamice memory allocation for the matrix of the graph
    int **mat = new int *[node];
    for (int i = 0; i < node; i++)
        mat[i] = new int[node];

    // let's initialize all the elemnts of the array with zero
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            mat[i][j] = 0;
        }
    }

    int c1, c2, w;
    for (int i = 0; i < edge; i++)
    {
        cin >> c1 >> c2 >> w;
        mat[c1][c2] = w;
    }
    printGraph(mat, node);

    return 0;
}