#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int remain = a % b;
        a = b;
        b = remain;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Enter two positive integers: ";
    cin >> x >> y;
    int result = (x*y)/gcd(x,y);
    cout << "LCM of " << x << " & " << y << " is " << result << endl;

    return 0;
}
