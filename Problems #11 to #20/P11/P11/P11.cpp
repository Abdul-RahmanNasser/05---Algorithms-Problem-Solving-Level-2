// Problem#11/2: Palindrome Number.
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
int Calculate_Reverse_Numbers(string num) {
    string sum = "";
    for (int i = num.length() - 1; i >= 0; i--)
        sum += num[i];
    return stoi(sum);
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
bool Check_Is_Plindrome(int num) {
    return num == Calculate_Reverse_Numbers(Convert_Int_To_String(num));
    //return num == Calculate_Reverse_Numbers(num);
}
void Print_Is_Plindrome(int num) {
    if (Check_Is_Plindrome(num))
        cout << "Yes, it is a plindrome number.\n";
    else
        cout << "No, it is not a plindrome number.\n";
}
int main() {
    int num = Read_Num("Please, enter a positive number: ");
    Print_Is_Plindrome(num);
    return 0;
}