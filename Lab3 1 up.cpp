#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stone;
    cout<<"Enter Number of Stones : ";
    cin>>stone;
    int currentPlayer = 1;

    while (stone > 0)
    {
        cout << "Stones left: " << stone << endl;
        int move;
        cout << "Player " << currentPlayer << ", enter how many stones you want to remove (1-3): ";
        cin >> move;
        if(move>3 && move<1){
            cout<<"Worng Move"<<endl;
            continue;
        }
        stone -= move;
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
    cout << "Game over. Player " << (currentPlayer == 1 ? 2 : 1) << " wins!" << std::endl;
    return 0;
}