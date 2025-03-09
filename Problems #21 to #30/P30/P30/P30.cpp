// Problem#30/2: Sum of 2 arrays to a third one.
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
void Fill_Arr(short arr[100], short length) {
    for (short i = 0; i < length; i++)
        arr[i] = Random_Num(1, 100);
}
void Sum_Of_2_Arrays(short arr1[100], short arr2[100],short arr3[100], short length) {
    for (short i = 0; i < length; i++)
        arr3[i] = arr1[i] + arr2[i];
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
    short arr1[100], arr2[100], arr3[100];
    short length = Read_Num("Please, enter the number of the elements is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr(arr1, length);
    cout << "\nArray 1 elements: ";
    Print_Arr(arr1, length);
    Fill_Arr(arr2, length);
    cout << "\nArray 2 elements: ";
    Print_Arr(arr2, length);
    cout << "\nThe summition of the 2 arrays: ";
    Sum_Of_2_Arrays(arr1, arr2, arr3, length);
    Print_Arr(arr3, length);
    return 0;
}