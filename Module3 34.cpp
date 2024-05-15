#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the Dimension : ";
    cin >> m;
    int a[m][m];
    int b[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != b[i][j])
            {
                cout << "Non-Symmetric\n";
                return 0;
            }
        }
    }
    cout << "Symmetric\n";
    return 0;
}