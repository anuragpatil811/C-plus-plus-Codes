#include<iostream>
using namespace std;
string vigenere(string text, string key, bool EncDec);
int main()
{
    string plainText, cipherText, key, x;
    
    do
    {
        cout<<"Welcome to the encryption decryption station"<<endl;
    cout<<"Please choose one of the following notions"<<endl;
    cout<<"1.Encryption 2. Decryption 3. exit"<<endl;
    int option;
    cin>>option;
    switch(option)
    {
        case 1:
          cout<<"Please enter a plaintext"<<endl;
          cin>>plainText;
          cout<<"Please enter a key"<<endl;
          cin>>key;
          cipherText = vigenere(plainText, key, 0);
          cout<<"Cipher Text:"<<cipherText<<endl;
          //Vigenre()
          cout<<"Press Y/y to repeat the process or any key to exit"<<endl;
          cin>>x;
              break;
        case 2:
        cout<<"Please enter a ciphertext"<<endl;
        cin>>cipherText;
        cout<<"Please enter a key"<<endl;
        cin>>key;
        cipherText = vigenere(plainText, key, 1);
          cout<<"Plain Text:"<<plainText<<endl;
        cout<<"Press Y/y to repeat the process or any key to exit"<<endl;
        cin>>x;
        //Vigenre()
        case 3:
       x = 'n';
           break;
    }
    } while (x=='Y' || x=='y');        
}
string vigenere(string text, string key, bool EncDec)
{
    string newKey = key, newText;
    while(newKey.length()<text.length())
    {
       newKey += key; 
    }
    if(EncDec == 0)
    {
           for(int i=0; i<text.length(); i++)
           {
            newText +=  (text[i]+newKey[i])%26 + 65;
           }
    }
    else
    {
        for(int i=0; i<text.length(); i++)
        {
         newText +=  (text[i]+newKey[i]+26)%26 + 65;
        }
    }
    return 
}