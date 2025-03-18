// Problem#41/2: Is Palindrome Array.
#include <iostream>
using namespace std;
void Fill_Arr(short arr[100], short length) {
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
void Print_Arr(short arr[100], short length) {
    for (short i = 0; i < length; i++) {
        cout << arr[i];
        if (i == length - 1)
            cout << ".\n";
        else
            cout << " ";
    }
}
bool Check_Is_Palindrome_Array(short arr[100], short length) {
    for (short i = 0; i < length / 2; i++)
        if (arr[i] != arr[length - i - 1])
            return 0;
    return 1;
}
void Print_Is_Palindrome_Array(short arr[100], short length) {
    if (Check_Is_Palindrome_Array(arr, length))
        cout << "\nYes, the array is palindrome.\n";
    else
        cout << "\nYes, the array is not palindrome.\n";
}
int main() {
    short arr[100], length = 6;
    srand((unsigned)time(NULL));
    Fill_Arr(arr, length);
    cout << "Array elements: ";
    Print_Arr(arr, length);
    Print_Is_Palindrome_Array(arr, length);
    return 0;
}