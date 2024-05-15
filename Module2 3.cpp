#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter the size of the set: ";
    cin >> N;

    vector<int> set(N);
    cout << "Enter the elements of the set:\n";
    for (int i = 0; i < N; ++i) {
        cin >> set[i];
    }

    int powerN = 1 << N;
    for (int i = 0; i < powerN; ++i) {
        cout << "{ ";
        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                cout << set[j] << " ";
            }
        }
        cout << "} ";
    }

    return 0;
}
