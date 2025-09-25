#include <iostream>
#include <string>
using namespace std;

int main() {
    string secret = "Khoor, L Oryh Brx ❤"; 
    string decoded = "";

    
    for (char c : secret) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            decoded += char((c - base - 3 + 26) % 26 + base);
        } else {
            decoded += c; // keep spaces and emojis
        }
    }

    cout << "🤫  🤫" << endl;
    cout << "Hidden Message: " << decoded << endl;

    return 0;
}