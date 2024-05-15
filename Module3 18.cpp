#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    int x = (n * n) + 1;
    cout << "Value of f(n) = " << x << endl;
    
    if (isPrime(x))
        cout << "f(n) is prime" << endl;
    else
        cout << "f(n) is not prime" << endl;

    return 0;
}