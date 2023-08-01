#include <bits/stdc++.h>
using namespace std;

void displayGraph(int **m, int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    int vertex, edge;
    cout << "Please enter the number of vertex and edge of the grpah: ";
    cin >> vertex >> edge;

    int **graph = new int *[vertex];
    for (int i = 0; i < vertex; i++)
    {
        graph[i] = new int[vertex];
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            graph[i][j] = 0;
        }
    }

    int c1, c2, w;
    cout << "Please input the edges with wieght : " << endl;
    for (int i = 0; i < edge; i++)
    {
        cin >> c1 >> c2 >> w;
        graph[c1][c2] = w;
    }

    displayGraph(graph, vertex);

    return 0;
}