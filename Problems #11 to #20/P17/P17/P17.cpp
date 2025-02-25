// Problem17/2: Guess a 3-Letter Password.
#include <iostream>
using namespace std;
string Read_Word() {
    string password;
    cout << "Please, enter a word from AAA to ZZZ: ";
    cin >> password;
    return password;
}
void Print_All_Letters() {
    short counter = 1;
    string password = Read_Word();
    for (short i = 65; i <= 90; i++)
        for (short j = 65; j <= 90; j++)
            for (short k = 65; k <= 90; k++) {
                cout << "Trial[" << counter << "]: " << char(i) << char(j) << char(k) << ".\n";
                if (char(i) == password[0] && char(j) == password[1] && char(k) == password[2]) {
                    cout << "Password is " << password << ".\n";
                    cout << "Found after " << counter;
                    if (counter == 1)
                        cout << " Trial.\n";
                    else
                        cout << " Trials.\n";
                    return;
                }
                counter++;
            }
    cout << "The password is not found.\n";
}
int main()
{
    Print_All_Letters();
    return 0;
}