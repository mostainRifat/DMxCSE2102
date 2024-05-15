#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1;
	cout << "Enter size of set A: ";
	cin >> n1;
	int setA[n1];
	cout << "Enter elements of set A: ";
	for (int i = 0; i < n1; i++){
		cin >> setA[i];
	}

	int n2;
	cout << "Enter size of set B: ";
	cin >> n2;
	int setB[n2];
	cout << "Enter elements of set B: ";
	for (int j = 0; j < n2; j++)
	{
		cin >> setB[j];
	}
	cout<<"Cartesian Product: ";
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n2; j++)
			cout << "(" << setA[i] << "," << setB[j] << ") ";
	return 0;
}
