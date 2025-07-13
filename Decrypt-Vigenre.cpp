#include<iostream>
using namespace std;
int main()
{
    string ciphertext;
    string key;
    cout << "Enter a ciphertext: ";
    cin >> ciphertext;
    cout << "Enter a key: ";
    cin >> key;

    string newkey;
    while (newkey.length() < ciphertext.length())
        newkey += key;
    newkey = newkey.substr(0, ciphertext.length());

    string plaintext = ciphertext; 

    for (int i = 0; i < ciphertext.length(); i++)
    {
        plaintext[i] = (ciphertext[i] - newkey[i] + 26) % 26 + 'A';
    }

    cout << "Decrypted plaintext: " << plaintext << endl;
}
