// Problem#15/2: Letter pattern.
#include <iostream>
using namespace std;
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0 || num > 26);
    return num;
}
void Print_Freq_Letter(int num) {
    for (int i = 1; i <= num; i++)
        cout << char(num + 64);
}
void Print_Freq(int num) {
    for (int i = 1; i <= num; i++) {
        Print_Freq_Letter(i);
        cout << ".\n";
    }
}
int main() {
    int number = Read_Num("Please, enter a positive number that less than or equal 26: ");
    Print_Freq(number);
    return 0;
}