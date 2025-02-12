// Problem#09/2: All Digits Frequency.
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
short Calculate_Count_Freq(string num, short digit) {
    short sum = 0;
    for (short i = 0; i <= num.length() - 1; i++)
        if (digit == num[i] - '0')
            sum++;
    return sum++;
}
void Print_All_Digit_Frequency(string num) {
    for (short digit = 0; digit <= 9; digit++)
        if (Calculate_Count_Freq(num, digit) > 0) {
            cout << "Digit " << digit << " Frequency is " << Calculate_Count_Freq(num, digit);
            if (Calculate_Count_Freq(num, digit) == 1)
                cout << " Time.\n";
            else
                cout << " Times.\n";
        }
}
//short Calculate_Counter_Freq(int number, short digit) {
//    short sum = 0, remainder;
//    while (number > 0) {
//        remainder = number % 10;
//        number = number / 10;
//        if (digit == remainder)
//            sum++;
//    }
//    return sum;
//}
//void Print_All_Digit_Frequency(int number) {
//    int num = number;
//    for (short digit = 0; digit <= 9; digit++)
//        if (Calculate_Counter_Freq(number, digit) > 0) {
//            cout << "Digit " << digit << " Frequency is " << Calculate_Counter_Freq(number, digit);
//            if (Calculate_Counter_Freq(number, digit) == 1)
//                cout << " Time.\n";
//            else
//                cout << " Times.\n";
//            number = num;
//        }
//}
int main()
{
    int num = Read_Num("Please, enter a positive number: ");
    Print_All_Digit_Frequency(Convert_Int_To_String(num));
    //Print_All_Digit_Frequency(num);
    return 0;
}