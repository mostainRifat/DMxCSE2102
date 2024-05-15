#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true;
}


int main()
{
    long long int n;
    cin>>n;
    if(isPrime(n))
        cout<<n<<" is a Prime number";
    else
        cout<<n<<" is Not a Prime number";
    return 0;
}