#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stone;
    cout << "Enter Number of stone : ";
    cin >> stone;
    int move;
    cout << "Player 1 enter how many stones you want to remove (1-3): ";
    cin >> move;
    if(move < 1 || move>3 || move > stone)
        cout<<"invalid input";

    stone -= move;

    if(stone % 4 == 0)
        cout<<"Player 1 wins !";
    else
        cout<<"Player 2 can win !";
    return 0;
}