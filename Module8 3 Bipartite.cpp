#include <bits/stdc++.h>
using namespace std;

const int N = 10e3 + 3;
vector<int> graph[N];
int color[N];

bool isBipartite(int src)
{
    queue<int> q;
    q.push(src);
    color[src] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : graph[u])
        {
            if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                return false; // Not Bipartite
            }
        }
    }
    return true; // Bipartite
}

int main()
{
    int n, m;
    cout << "Enter Total Vertices and Edges : ";
    cin >> n >> m;

    memset(color, -1, sizeof(color));

    cout << "Enter the Pairs : \n";
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    if (isBipartite(1))
        cout << "Graph is Bipartite\n";
    else
        cout << "Graph is not Bipartite\n";

    return 0;
}
