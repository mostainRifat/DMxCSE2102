// BUBBLE SORT
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    auto beginTime = chrono::high_resolution_clock::now();
    int l = 1, u =700000, n=20000;
    cout << "Enter List Size: ";
    //cin >> n;
    int arr[n + 10];
    cout << "List Of The Numbers : ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (u - l + 1) + l;
        //cout << arr[i] << " ";
    }
    
    bubbleSort(arr, n);
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
