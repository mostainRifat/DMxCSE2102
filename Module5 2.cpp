#include <bits/stdc++.h>
using namespace std;

string nxt(string bitString)
{
    int n = bitString.size() - 1;
    while (bitString[n] == '1')
    {
        bitString[n] = '0';
        n--;
    }
    bitString[n] = '1';

    return bitString;
}

int main()
{
    string bits;
    cout << "Enter a bit String: ";
    cin >> bits;
    string nextBit = nxt(bits);
    cout << "Next bit string: "<<nextBit;

    cout << endl;
}