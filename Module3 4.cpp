//BINARY SEARCH
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int l = 1, u = 10000;
    int x,n;
    cout<<"Enter List Size: ";
    cin>>n;
    int arr[n+10];
    //cout<<"List Of The Numbers : ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (u - l + 1) + l ;
        //cout<< arr[i] <<" ";
    }
    sort(arr, arr+n); 
    cout << "The sorted List : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }   

    cout<<endl<<"Enter The value you want to search : ";
    cin>>x;
    int result = binarySearch(arr, l, n - 1, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

    return 0;
}