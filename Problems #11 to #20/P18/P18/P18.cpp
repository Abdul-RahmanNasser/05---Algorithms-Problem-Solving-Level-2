// Problem#18/2: Encrypt/Decrypt Text.
#include <iostream>
using namespace std;
string Read_Text() {
    string text;
    cout << "PLease, enter a text: ";
    cin >> text;
    return text;
}
void Encrypt_Text(string& text) {
    for (short i = 0; i < text.length(); i++)
        text[i] = char(int(text[i]) + 3241980756);
    cout << "The text after the encryption: " << text << ".\n";
}
void Decrypt_Text(string text) {
    for (short i = 0; i < text.length(); i++)
        text[i] = char(int(text[i]) - 3241980756);
    cout << "The text after the decryption: " << text << ".\n";
}
int main()
{
    string text = Read_Text();
    Encrypt_Text(text);
    Decrypt_Text(text);
    return 0;
}