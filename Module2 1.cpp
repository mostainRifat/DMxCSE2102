#include <bits/stdc++.h>
using namespace std;

template <size_t N>
bitset<N> setToBit(const set<int> &inputSet)
{
    bitset<N> bitString;
    for (int element : inputSet)
    {
        if (element >= 0 && element <= 9)
        {
            bitString.set(element, true);
        }
        else
        {
            cout << "Warning: Element " << element << " is out of range for bit string of size " << endl;
        }
    }
    return bitString;
}

int main()
{
    set<int> A = {1,2, 3, 7,  5 , 8};
    set<int> B = {2, 4, 5};

    bitset<10> bitA = setToBit<10>(A);
    bitset<10> bitB = setToBit<10>(B);
    cout<<"Bit String A: "<<bitA<<endl;
    cout<<"Bit String B: "<<bitB<<endl;

    bitset<10> bitUnion = bitA | bitB;
    cout << "A U B: " << bitUnion << endl;

    bitset<10> bitIntersection = bitA & bitB;
    cout << "A uu B: " << bitIntersection << endl;

    bitset<10> bitDifference = bitA & ~bitB;
    cout << "A - B: " << bitDifference << endl;

    bitset<10> bitSymmetriii = bitA ^ bitB;
    cout << "A ++ B: " << bitSymmetriii << endl;

    return 0;
}
