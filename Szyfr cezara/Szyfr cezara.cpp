#include <iostream>
#include <string>

using namespace std;

// Function to encrypt the input text using the Caesar cipher.
// The input string is passed by constant reference (const string& text) 
// to avoid unnecessary copying.
string caesarCipher(const string& text, int key) {
	string result = text;

	// Iterate over each character in the resulting string.
	for (char& c : result) {
		if (isalpha(c)) {
			// Determine the base character ('A' for uppercase, 'a' for lowercase).
			char base = isupper(c) ? 'A' : 'a';

			// Apply the cipher shift logic.
			c = (c - base + key) % 26 + base;
		}
	}

	return result;
}

int main()
{
	string text = "";
	int key = 0;

	cout << "Enter text to encrypt: ";
	getline(cin, text);

	cout << "Enter key (shift): ";
	cin >> key;

	string encryptedText = caesarCipher(text, key);
	cout << "Encrypted text: " << encryptedText << endl;
	
	return 0;
}