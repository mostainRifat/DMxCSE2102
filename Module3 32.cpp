#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, k, n;
    cout << "Enter the dimensions of matrix A (m and k): ";
    cin >> m >> k;

    cout << "Enter the dimensions of matrix B (k and n): ";
    cin >> k >> n;

    int matA[m][k], matB[k][n], ans[m][n];

    cout << "Enter the elements of matrix A: "<<endl;
    for (int i = 0; i < m; i++)
        for(int j = 0; j < k; j++)
            cin >> matA[i][j];

    cout << "Enter the elements of matrix B: "<<endl;
    for (int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            cin >> matB[i][j];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
            for (int x = 0; x < k; x++)
            {
                ans[i][j] += matA[i][x] * matB[x][j];
            }
        }
    }

    cout << "The result matrix AB: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
