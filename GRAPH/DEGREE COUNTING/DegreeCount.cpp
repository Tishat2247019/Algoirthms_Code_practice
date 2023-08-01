// #include <iostream>
// using namespace std;

// void displayGraph(int **m, int v)
// {
//     cout << "The grpah through adjacency matrix is: " << endl;

//     for (int i = 0; i < v; i++)
//     {
//         for (int j = 0; j < v; j++)
//         {
//             cout << m[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// void outdegreeCount(int **m, int v, int *ind)
// {
//     for (int i = 0; i < v; i++)
//     {
//         for (int j = 0; j < v; j++)
//         {
//             if (m[i][j] != 0)
//             {
//                 ind[i] = ind[i] + 1;
//             }
//         }
//         cout << "Outdegree of vertex " << i << " is: " << ind[i] << endl;
//     }
//     cout << endl;
// }

// void indegreeecount(int **m, int v, int *out)
// {
//     for (int i = 0; i < v; i++)
//     {
//         for (int j = 0; j < v; j++)
//         {
//             if (m[j][i] != 0)
//             {
//                 out[i] = out[i] + 1;
//             }
//         }
//         cout << "Indegree of vertex " << i << " is: " << out[i] << endl;
//     }
//     cout << endl;
// }

// int main()
// {
//     int v, e;
//     cout << "Please enter the number of vertex and edge of the graph: ";
//     cin >> v >> e;

//     int **graph = new int *[v];
//     for (int i = 0; i < v; i++)
//     {
//         graph[i] = new int[v];
//     }

//     for (int i = 0; i < v; i++)
//     {
//         for (int j = 0; j < v; j++)
//         {
//             graph[i][j] = 0;
//         }
//     }

//     int c, cc, w;
//     cout << "Please input the graph : ";
//     for (int i = 0; i < e; i++)
//     {
//         cin >> c >> cc >> w;
//         graph[c][cc] = w;
//     }
//     displayGraph(graph, v);
//     int indegree[v];
//     int outdegree[v];

//     for (int i = 0; i < v; i++)
//         indegree[i] = 0;
//     for (int i = 0; i < v; i++)
//         outdegree[i] = 0;

//     outdegreeCount(graph, v, outdegree);
//     indegreeecount(graph, v, indegree);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void displayGraph(int **m, int v)
{
    cout << "The grpah through adjacencey matrix is: " << endl;
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

void indegreCount(int **m, int v, int *c)
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

void outdegreCount(int **m, int v, int *c)
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
        cout << "Outdegree of vertex " << i << " is : " << c[i] << endl;
        ;
    }
    cout << endl;
}

int main()
{
    int v, e;
    cout << "Please enter the number of vertex and edge of the graph : ";
    cin >> v >> e;

    int **graph = new int *[v];
    for (int i = 0; i < v; i++)
        graph[i] = new int[v];

    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            graph[i][j] = 0;

    int c, cc, w;
    cout << "Please input the graph through adjacency matrix: " << endl;

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

    indegreCount(graph, v, indegree);
    outdegreCount(graph, v, outdegree);

    return 0;
}