// Problem#14/2: Inverted letter pattern.
#include <iostream>
using namespace std;
short Read_Num(string message) {
    short num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0 || num > 26);
    return num;
}
void Print_Freq_Letter(short num) {
    for (short i = num; i > 0; i--)
        cout << char(num + 64);
}
void Print_Freq(short num) {
    for (short i = num; i > 0; i--) {
        Print_Freq_Letter(i);
        cout << ".\n";
    }
}
int main() {
    short number = Read_Num("Please, enter a positive number that less than or equal 26: ");
    Print_Freq(number);
    return 0;
}