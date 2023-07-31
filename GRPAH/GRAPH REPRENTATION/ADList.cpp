#include <bits/stdc++.h>
using namespace std;

const int v = 6;

void addEdge(vector<int> *graph, int source, int destination)
{
    graph[source].push_back(destination);
    graph[destination].push_back(source);
}

void printGraph(vector<int> *graph)
{
    cout << "ADJACENCY LIS IS: " << endl;
    for (int source = 0; source < v; source++)
    {
        cout << "Numver of nieghbourse for: " << source << " are " << graph[source].size() << endl;
        for (int neighbours : graph[source])
        {
            cout << "There is a EDGE between : " << source << " and " << neighbours << endl;
        }
        cout << endl;
    }
}

int main()
{

    vector<int> graph[v];
    addEdge(graph, 0, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 5);
    addEdge(graph, 0, 5);
    addEdge(graph, 3, 5);
    addEdge(graph, 3, 4);
    addEdge(graph, 2, 4);

    printGraph(graph);

    return 0;
}