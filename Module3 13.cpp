#include <iostream>
#include <cstring>
using namespace std;
int key;

string encryptCaesarCipher(const string& message) {
    string encryptedMessage = message;
    int length = encryptedMessage.length();

    for (int i = 0; i < length; ++i) {
        char& ch = encryptedMessage[i];

        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = base + (ch - base + key) % 26;
        }
    }
    return encryptedMessage;
}

string decryptCaesarCipher(const string& encryptedMessage) {
    string decryptedMessage = encryptedMessage;
    int length = decryptedMessage.length();

    for (int i = 0; i < length; ++i) {
        char& ch = decryptedMessage[i];

        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = base + (ch - base - key + 26) % 26;
        }
    }

    return decryptedMessage;
}

int main() {
    cout << "Enter the message: ";
    string message;
    getline(cin, message);

    cout << "Enter the key (shift value): ";
    cin >> key;

    // Encrypt the message
    string encryptedMessage = encryptCaesarCipher(message);
    cout << "Encrypted message: " << encryptedMessage << endl;

    // Decrypt the encrypted message
    string decryptedMessage = decryptCaesarCipher(encryptedMessage);
    cout << "Decrypted message: " << decryptedMessage << endl;

    return 0;
}
