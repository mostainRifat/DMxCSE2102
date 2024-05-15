#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 0,l = 1, u = 1000;
    int n = 0 ;
    cout<<"Enter List size: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int randomNumber = rand() % (u - l + 1) + l;;
        cout<< randomNumber <<" ";
        if (max < randomNumber)
        {
            max = randomNumber;
        }
    }
    cout<<endl<<"Highest value is :" << max<<endl;
    return 0;
}
