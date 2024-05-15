#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main(){
    int n,f=0;
    cin>>n;

    for(int i = 2 ; i<n/2 ;i++){
        if(isPrime(i)){
            int k = n-i;
            if(isPrime(k)){
                cout<<i <<" "<<k<< endl;
                f=1;
            }
        }
    }
    if (f==0)
        cout<<"No Pairs Available.";
}