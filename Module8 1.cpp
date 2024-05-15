#include <bits/stdc++.h>
using namespace std;
const int N = 10e3 + 3;
int graph1[N][N], Degree[N];

int main()
{
    int n;
    cout << "Enter Total Edges : ";
    cin >> n;
    cout << "Enter the Pairs : \n";

    for (int i = 0; i < n; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;
        Degree[v1]++;
        Degree[v2]++;
    }
    for (int i = 0; i < N ; i++)
    {
        if (Degree[i] != 0)
            cout << "Degree of " << i << " : " << Degree[i] << endl;
    }
}