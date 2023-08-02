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
}

int main()
{
    int e;
    cout << "Enter the number of edges : ";
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    return 0;
}