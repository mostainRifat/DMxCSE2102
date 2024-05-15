#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& arr ) {
    int n = arr.size();
    int j = n - 1;

    while (j > 0 && arr[j - 1] >= arr[j])
        j--;
    
    //cout<<j<<endl;

    if (j <= 0) {
        cout << "Highest Combination Possible" << endl;
        return;
    }

    int k = n;
    while (arr[j - 1] >= arr[k - 1])
        k--;

    swap(arr[j - 1], arr[k - 1]);

    int r = n;
    int s = j + 1;
    while (r > s) {
        swap(arr[r - 1], arr[s - 1]);
        r--;
        s++;
    }
}

int main() {
    
    vector<int> arr={3,4,1,8,4};

    for (int num : arr)
        cout << num << " ";
    cout<<endl;

    nextPermutation(arr );
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
