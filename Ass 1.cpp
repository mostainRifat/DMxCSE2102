#include <bits/stdc++.h>
using namespace std;

// Function to generate all subsets of a given set S
vector<vector<int>> generatePowerSet(const vector<int>& S) {
    int n = S.size();
    int powerSetSize = pow(2, n);
    vector<vector<int>> powerSet;

    for (int i = 0; i < powerSetSize; ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(S[j]);
            }
        }
        powerSet.push_back(subset);
    }
    return powerSet;
}

// Function to sum up the elements of all subsets
int sumOfAllSubsetSums(const vector<int>& S) {
    int n = S.size();
    int powerSetSize = pow(2, n);
    int totalSum = 0;

    for (int i = 0; i < powerSetSize; ++i) {
        int subsetSum = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subsetSum += S[j];
            }
        }
        totalSum += subsetSum;
    }
    return totalSum;
}

int main() {
    vector<int> S = {3,4,5,6};  // Given set S
    vector<vector<int>> powerSet = generatePowerSet(S);
    
    cout << "Power set: " << endl;
    for (const auto& subset : powerSet) {
        cout << "{ ";
        for (int elem : subset) {
            cout << elem << " ";
        }
        cout << "}" << endl;
    }

    int totalSum = sumOfAllSubsetSums(S);
    cout << "The sum of all subset sums is: " << totalSum << std::endl;

    return 0;
}
