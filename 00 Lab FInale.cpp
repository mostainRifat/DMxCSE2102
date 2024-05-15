#include<bits/stdc++.h>
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
    for(int i=1 ; i<= 100 ;i++)
    {
        int k = i*i+1;
        if(isPrime(k))
        {
            cout<<"n = "<<i << ", Prime Number : "<<k<<endl;
        }
    }
    return 0;

}