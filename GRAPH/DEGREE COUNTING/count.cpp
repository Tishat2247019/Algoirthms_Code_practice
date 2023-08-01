#include <bits/stdc++.h>
using namespace std;

void displayGraph(int **m, int v)
{
    cout << "The graph throgh adjacency matrix is: " << endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void indegreeCount(int **m, int v, int *c)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (m[j][i] != 0)
            {
                c[i] = c[i] + 1;
            }
        }
        cout << "the indegree of vertex " << i << " is: " << c[i] << endl;
    }
    cout << endl;
}

void outdegreecount(int **m, int v, int *c)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (m[i][j] != 0)
            {
                c[i] = c[i] + 1;
            }
        }
        cout << "Outdegree of vertex " << i << " is " << c[i] << endl;
    }
    cout << endl;
}

int main()
{
    int v, e;
    cout << "Please enter the number of vertex and edge of the graph: ";
    cin >> v >> e;

    int **graph = new int *[v];
    for (int i = 0; i < v; i++)
    {
        graph[i] = new int[v];
    }

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            graph[i][j] = 0;
        }
    }

    int c, cc, w;
    cout << "Please input the grpah through adjacency matrix: " << endl;
    for (int i = 0; i < e; i++)
    {
        cin >> c >> cc >> w;
        graph[c][cc] = w;
    }
    displayGraph(graph, v);

    int indegree[v];
    int outdegree[v];

    for (int i = 0; i < v; i++)
    {
        indegree[i] = 0;
        outdegree[i] = 0;
    }

    indegreeCount(graph, v, indegree);
    outdegreecount(graph, v, outdegree);

    return 0;
}