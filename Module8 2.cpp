#include <bits/stdc++.h>
using namespace std;
const int N = 10e3 + 3;
int graph1[N][N], inDegree[N] , outDegree[N];

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
        outDegree[v1]++;
        inDegree[v2]++;
    }
    for (int i = 0; i < N ; i++)
    {
        if (inDegree[i] != 0 || outDegree[i] != 0)
        {
            cout << "In Degree of " << i << " : " << inDegree[i] << endl;
            cout << "Out Degree of " << i << " : " << outDegree[i] << endl;
            cout<<endl;
        } 
    }
}