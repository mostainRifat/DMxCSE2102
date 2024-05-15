#include <bits/stdc++.h>
using namespace std;

long long transform(int n)
{
    if (n == 1) return 0;

    else if(n % 2 == 0)
    {
        cout << "T (" << n << ") = " << n << "/2 = " << n/2 << endl;
        transform (n/2);
    }
    else
    {
        cout << "T (" << n << ") = 3 x " << n << " + 1 = " << n*3+1 << endl;
        transform (n*3+1);
    }
}
int main()
{
    long long n;
    cout << "Enter a positive int: ";
    cin >> n;
    transform(n);
    return 0;
}
