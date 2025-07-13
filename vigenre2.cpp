#include<iostream>
using namespace std;
int main()
{
    string plaintext;
    string ciphertext;
    string key;
    cout<<"Enter a plaintext, please";
    cin>>plaintext;
   // cout<<"Enter ciphertext";
    //cin>>ciphertext;
    cout<<"Enter a key, please";
    cin>>key;
    string newkey;
    while(newkey.length()<plaintext.length())
    {
        newkey += key;
    }
    for (int i = 0; i < plaintext.length(); i++)
    {
      ciphertext += (plaintext[i] + newkey[i]+26)%26 + 65;
    }
    cout<<ciphertext<<endl;
}

