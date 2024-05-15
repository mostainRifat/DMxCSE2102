#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v;
    
    while(n!=0)
    {
        if(n>=25)
        {
            v.push_back(25);
            n-=25;
        }
        else if(n>=10)
        {
            v.push_back(10);
            n-=10;
        }
        else if(n>=5)
        {
            v.push_back(5);
            n-=5;
        }
        else
        {
            v.push_back(1);
            n-=1;
        }
    }
    cout<<v.size()<<"\n";

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
/*Qaurter-> 25 cents
penny--> 1 cent
nickel--> 5 cents
dime--> 10 cents
*/