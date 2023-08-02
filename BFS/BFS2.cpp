#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int> g[N];

void dfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    cout << "BFS order of the graph is: ";
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        for (int child : g[cur_v])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = 1;
            }
        }
    }
    cout << endl;
}

int main()
{
    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    cout << "Enter the graph:  " << endl;
    for (int i = 0; i < e; i++)
    {
        int c1, c2;
        cin >> c1 >> c2;
        g[c1].push_back(c2);
        g[c2].push_back(c1);
    }
    dfs(1);
    return 0;
}