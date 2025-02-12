// Problem#07/2: Reverse Number.
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
void Print_Reverse_Numbers(string num) {
    string sum = "";
    for (int i = num.length() - 1; i >= 0; i--)
        sum += num[i];
    cout << "The reversed number = " << stoi(sum) << ".\n";
}
//void Print_Reverse_Numbers(int number) {
//    int remainder, sum = 0;
//    while (number > 0) {
//        remainder = number % 10;
//        number = number / 10;
//        sum = sum * 10 + remainder;
//    }
//    cout << "The reversed number = " << sum << ".\n";
//}
int main() {
    Print_Reverse_Numbers(Convert_Int_To_String());
    //Print_Reverse_Numbers(Read_Num("Please, enter a positive number: "));
    return 0;
}