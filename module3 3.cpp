//LINEAR SEARCH
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l = 1, u = 100;
    int loc= 0,x;
    int n = 0 ;
    cout<<"Enter List Size : ";
    cin>>n;
    int arr[n+10];
    cout<<"List Of The Numbers : ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (u - l + 1) + l ;
        cout<< arr[i] <<" ";
    }
    cout<<endl<<"Enter The value you want to search : ";
    cin>>x;
    cout<<"The position is (are) : ";
    for(int i = 0; i<n; i++){
        if ( x == arr[i]){
            loc = i ;
            cout<<loc<<" ";
        }
    }
    if (loc ==  0 ){
        cout<<"no such value";
    }
    return 0;
}
