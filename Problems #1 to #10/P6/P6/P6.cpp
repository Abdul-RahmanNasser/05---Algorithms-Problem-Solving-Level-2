// Problem#05/2: Print Digits in a Reversed Order.
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
string Convert_Int_To_String() {
    return to_string(Read_Num("Please, enter a positive number: "));
}
int Sum_Of_Digits(string num) {
    int sum = 0;
    for (int i = num.length() - 1; i >= 0; i--)
        sum += (num[i] - '0');
    return sum;
}
/*
int Sum_Of_Digits(int number) {
    int remainder, sum = 0;
    while (number > 0) {
        remainder = number % 10;
        number = number / 10;
        sum += remainder
    }
    cout << "The summition of the digits = " << sum << ".\n";
}
*/
int main()
{
    cout << "The summition of the digits = " << Sum_Of_Digits(Convert_Int_To_String()) << ".\n";
    //cout << "The summition of the digits = " << Sum_Of_Digits(Read_Num("Please, enter a positive number: ")) << ".\n";
    return 0;
}