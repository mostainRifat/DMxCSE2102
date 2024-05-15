#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 0,l = 1, u = 100;
    int first = 0 , last = 0;
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
            first = i + 1;
        }
        if(randomNumber == max && i< n){
            last = i+ 1;
        }
    }
    cout<<endl<<"Highest value is :" << max<<endl;
    cout<<"First occurance at : "<<first<<endl;
    cout<<"Last occurance at : "<<last<<endl;
    return 0;
}
