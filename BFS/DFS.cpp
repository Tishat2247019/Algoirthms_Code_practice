#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool visited1[N];
bool visited2[N];

void dfs(int source)
{
    visited1[source] = true;
    cout << source << " ";
    for (int child : g[source])
    {
        if (visited1[child])
        {
            continue;
        }
        dfs(child);
    }
}

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited2[source] = true;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";

        for (int child : g[cur_v])
        {
            if (!visited2[child])
            {
                q.push(child);
                visited2[child] = true;
            }
        }
    }
}

int main()
{
    int v, e;
    cout << "Enter the number of vertex and edge: ";
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    cout << endl;
    bfs(1);

    return 0;
}