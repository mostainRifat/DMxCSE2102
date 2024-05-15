// Insertion SORT
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    auto beginTime = chrono::high_resolution_clock::now();

    int l = 1, u = 50000, n=10000;
    // cout << "Enter List Size: ";
    // cin >> n;
    int arr[n + 10];
    cout << "List Of The Numbers : ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (u - l + 1) + l;
        //cout << arr[i] << " ";
    }
    insertionSort(arr, n);
    cout <<endl<< "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - beginTime);
    cout << "Execution Time: " << duration.count() << " microseconds" << endl;
    return 0;
}
