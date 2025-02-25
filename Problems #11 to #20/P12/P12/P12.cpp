// Problem#12/2: Inverted number pattern.
#include <iostream>
using namespace std;
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
void Print_Freq_Num(int num) {
    for (int i = num; i > 0; i--)
        cout << num;
}
void Print_Freq(int num) {
    for (int i = num; i > 0; i--) {
        Print_Freq_Num(i);
        cout << ".\n";
    }
}
int main() {
    int number = Read_Num("Please, enter a positive number: ");
    Print_Freq(number);
    return 0;
}