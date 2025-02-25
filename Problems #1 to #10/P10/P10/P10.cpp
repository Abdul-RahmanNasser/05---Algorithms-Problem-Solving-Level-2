// Problem#10/2: Print Digits in Order.
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
void Print_Digits(string num) {
    for (int i = 0; i < num.length(); i++)
        cout << num[i] - '0' << ".\n";
}
//int Calculate_Reverse_Numbers(int number) {
//    int remainder, sum = 0;
//    while (number > 0) {
//        remainder = number % 10;
//        number = number / 10;
//        sum = sum * 10 + remainder;
//    }
//    return sum;
//}
//void Print_Digits(int number) {
//    int remainder;
//    while (number > 0) {
//        remainder = number % 10;
//        number = number / 10;
//        cout << remainder << ".\n";
//    }
//}
int main() {
    Print_Digits(Convert_Int_To_String());
    //Print_Digits(Calculate_Reverse_Numbers(Read_Num("Please, enter a positive number: ")));
    return 0;
}