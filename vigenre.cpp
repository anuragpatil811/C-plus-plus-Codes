#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*Caesar Cipher
    char plain = 'A';
    char cipher;
    cipher = plain + 2;
    cout<<cipher;
    */
   // char plaintext = 'J';
   char plaintext = 'J';
    char ciphertext;
    char key = 'B';
    //ciphertext = (plaintext + key)%26 + 65;
    ciphertext = (plaintext-key + 26)%26 +65;
    cout<< ciphertext;
}
