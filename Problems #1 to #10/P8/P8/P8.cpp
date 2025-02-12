// Problem#08/2: Digit Frequency.
#include <iostream>
#include <string>
using namespace std;
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
string Convert_Int_To_String(int num) {
    return to_string(num);
}
void Print_Digit_Frequency(string num, short digit) {
    short sum = 0;
    for (short i = num.length() - 1; i >= 0; i--)
        if (digit == num[i] - '0')
            sum++;
    cout << "Digit " << digit << " Frequency is " << sum;
    if (sum == 1)
        cout << " Time.\n";
    else
        cout << " Times.\n";
}
//void Print_Digit_Frequency(int number, short digit) {
//    short remainder, sum = 0;
//    while (number > 0) {
//        remainder = number % 10;
//        number = number / 10;
//        if (digit == remainder)
//            sum++;
//    }
//    cout << "Digit " << digit << " Frequency is " << sum;
//    if (sum == 1)
//        cout << " Time.\n";
//    else
//        cout << " Times.\n";
//}
int main()
{
    int num = Read_Num("Please, enter a positive number: ");
    short digit = Read_Num("Please, enter the digit you want its frequency: ");
    Print_Digit_Frequency(Convert_Int_To_String(num), digit);
    //Print_Digit_Frequency(num, digit);
    return 0;
}