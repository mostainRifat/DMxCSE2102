#include <bits/stdc++.h>
using namespace std;
int n;
string OR(string a, string b)
{
    string st= "";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' && b[i] == '0')
        {
            st.insert(i,1, '0');
        }
        else
        {
            st.insert(i,1, '1');
        }
    }
    return st;
}
string AND(string a, string b)
{
    string st= "";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && b[i] == '1')
        {
            st.insert(i, 1, '1');
        }
        else
        {
            st.insert(i, 1, '0');
        }
    }
    return st;
}

string XOR(string a, string b)
{
    string st= "";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            st.insert(i, 1, '0');
        }
        else
        {
            st.insert(i, 1, '1');
        }
    }
    return st;
}

int main()
{
    cout<<"Enter Number of Bits: ";
    cin>>n;
    string a, b;
    cin >> a >> b;
    cout << "AND Operation: " << AND(a, b) << endl;
    cout << "OR Operation: " << OR(a, b) << endl;
    cout << "XOR Operation: " << XOR(a, b) << endl<< endl;

    return 0;
}