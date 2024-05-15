#include <bits/stdc++.h>
using namespace std;
int pow2(int n){
    for (int i = 0; i < n; i++)
        if (pow(2, i) == n)
            return 1;
    return 0;
}

int main(){
    int a,b;
    cout<<"Enter The Lower Limit : ";
    cin>>a;
    cout<<"Enter The Upper Limit : ";
    cin>>b;
    if(!(pow2(a)) || !(pow2(b)) || (a>b))
        cout<<"Error: Invalid Input";
    else
        cout<<"Total Set Bits : "<< (log2(b)*(b/2)) - (log2(a)*(a/2)) +1;
    return 0;
}