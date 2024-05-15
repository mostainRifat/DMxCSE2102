#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of Input : ";
    cin >> n;
    cout << "\nEnter The Inputs : ";
    int arr[n + 5], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int r = sum * (pow(2, n - 1));
    cout << "\nThe sum of all subset sums(R) is: " << r << endl;
    return 0;
}