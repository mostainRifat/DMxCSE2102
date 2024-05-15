#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the length of the bit strings
    cout << "Enter the length of bit strings: ";
    cin >> n;

    // Input the bit strings as integers
    int a, b;
    cout << "Enter the first bit string (in decimal): ";
    cin >> a;
    cout << "Enter the second bit string (in decimal): ";
    cin >> b;

    // Calculate bitwise AND, OR, and XOR
    int bitwiseAnd = a & b;
    int bitwiseOr = a | b;
    int bitwiseXor = a ^ b;

    // Output the results
    cout << "Bitwise AND: " << bitwiseAnd << endl;
    cout << "Bitwise OR: " << bitwiseOr << endl;
    cout << "Bitwise XOR: " << bitwiseXor << endl;

    return 0;
}
