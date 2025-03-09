// Problem#31/2: Shuffle Ordered Array.
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
void Swap(short& a, short& b) {
    short temp;
    temp = a;
    a = b;
    b = temp;
}
void Fill_Arr(short arr[100], short length) {
    for (short i = 0; i < length; i++)
        arr[i] = Random_Num(1, 100);
}
void Shuffle_Arr(short arr[100], short length) {
    for (short i = 0; i < length; i++)
        Swap(arr[Random_Num(1, length) - 1], arr[Random_Num(1, length) - 1]);
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
    short arr[100];
    short length = Read_Num("Please, enter the number of the elements is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr(arr, length);
    cout << "\nArray elements before shuffling: ";
    Print_Arr(arr, length);
    Shuffle_Arr(arr, length);
    cout << "\nArray elements after shuffling: ";
    Print_Arr(arr, length);
    return 0;
}