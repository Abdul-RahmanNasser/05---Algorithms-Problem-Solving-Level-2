// Problem#28/2: Copy Array.
#include <iostream>
using namespace std;
short Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num < 1 || num>100);
    return num;
}
short Random_Num(short from, short to) {
    return rand() % to + from;
}
void Fill_Arr1(short arr[100], short length) {
    for (short i = 0; i < length; i++)
        arr[i] = Random_Num(1, 100);
}
void Fill_Arr2(short arr1[100], short arr2[100], short length) {
    for (short i = 0; i < length; i++)
        arr2[i] = arr1[i];
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
int main() {
    short arr1[100], arr2[100];
    short length = Read_Num("Please, enter the number of the elements is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr1(arr1, length);
    cout << "\nArray 1 elements: ";
    Print_Arr(arr1, length);
    Fill_Arr2(arr1, arr2, length);
    cout << "\nArray 2 elements after copy: ";
    Print_Arr(arr2, length);
    return 0;
}