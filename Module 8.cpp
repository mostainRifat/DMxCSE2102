#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cout << "Enter the value of z: ";
    cin >> z;
    int flag = 0;
    for (int x = 1; x < z; x++)
    {
        for (int y = x; y < z; y++)
        {
            if (x * x + y * y == z * z)
            {
                cout << "(x,y) "
                     << "(" << x << "," << y << ")" << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0){
        cout << "There is No Pair" << endl;
    }
    return 0;
}