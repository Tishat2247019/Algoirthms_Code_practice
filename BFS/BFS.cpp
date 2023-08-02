#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int visted[N];

void dfs(int source)
{
    queue<int> q;
    q.push(source);
    visted[source] = 1;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        for (int child : g[cur_v])
        {
            while (!visted[child])
            {
                q.push(child);
                visted[child] = 1;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of edge: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);

    // 0 1
    // 0 3
    // 1 3
    // 2 3
    // 2 0
    return 0;
}