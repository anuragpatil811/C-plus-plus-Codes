#include<iostream>
using namespace std;
int main()
{
   /*char plain = 'A';
     char cipher;
     cipher = plain + 2;
     cout<<cipher;*/
     char plaintext = 'J';
     char ciphertext;
     char key = 'B';
     ciphertext = (plaintext+key)%26 + 65;
     cout<< ciphertext;
}