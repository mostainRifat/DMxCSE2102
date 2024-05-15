#include <bits/stdc++.h>
using namespace std;
bool check(int x, int y)
{
    return x == y;
}
int main()
{
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 2, 3, 4};

    bool forallxy = true;
    for (auto x : A)
    {
        for (auto y : B)
        {
            forallxy = forallxy && check(x, y);
        }
    }
    cout << "For all x, for all y,P(x,y):";
    if (forallxy == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    bool forallexist = true;
    for (auto x : A)
    {
        bool ey = false;
        for (auto y : B)
        {
            ey = ey || check(x, y);
        }
        forallexist = forallexist && ey;
    }
    cout << "For all x, exist y,P(x,y)  :";
    if (forallexist == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    bool existforall = false;
    for (auto x : A)
    {
        bool ex = true;
        for (auto y : B)
        {
            ex = ex && check(x, y);
        }
        existforall = existforall || ex;
    }
    cout << "Exist x, for all y,p(x,y)  :";
    if (existforall == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    bool exiexi = false;
    for (auto x : A)
    {
        for (auto y : B)
        {
            exiexi = exiexi || check(x, y);
        }
    }
    cout << "Exist x,exist y,p(x,y)     :";
    if (exiexi == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}