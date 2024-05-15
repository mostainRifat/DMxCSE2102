#include<bits/stdc++.h>
using namespace std;

int transform(int n)
{
    int y;
    if(n % 2 == 0)
    {
        y = n / 2;
        cout << "T (" << n << ") = " << n << "/2 = " << y << endl;
        return y;
    }
    else
    {
        y = 3 * n + 1;
        cout << "T (" << n << ") = 3 x " << n << " + 1 = " << y << endl;
        return y;
    }
}

int main()
{
    int n;
    cout << "Enter a positive int: ";
    cin >> n;
    while (n != 1)
    {
        n = transform(n);
    }
    return 0;
}