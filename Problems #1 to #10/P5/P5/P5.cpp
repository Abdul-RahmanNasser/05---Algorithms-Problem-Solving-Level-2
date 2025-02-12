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
void Print_Digits_In_Reversed_Order(string num) {
    for (int i = num.length() - 1; i >= 0; i--)
        cout << num[i] << ".\n";
}
/*
void PrintDigits(int Number)
{
    int Remainder;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}
*/
int main()
{
    Print_Digits_In_Reversed_Order(Convert_Int_To_String());
    //PrintDigits(Read_Num("Please, enter a positive number: "));
    return 0;
}