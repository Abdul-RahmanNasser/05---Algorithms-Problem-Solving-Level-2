// Problem#25/2: Min of Random Array.
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
void Print_Arr(short arr[100], short length) {
    cout << "\nArray Elements: ";
    for (short i = 0; i < length; i++) {
        cout << arr[i];
        if (i == length - 1)
            cout << ".\n";
        else
            cout << " ";
    }
}
short Min_Element(short arr[100], short length) {
    short min_element = 100;
    for (short i = 0; i < length; i++)
        if (arr[i] < min_element)
            min_element = arr[i];
    return min_element;
}
int main() {
    short arr[100];
    short length = Read_Num("Please, enter the number of the elements is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr(arr, length);
    Print_Arr(arr, length);
    cout << "\The minimum number is: " << Min_Element(arr, length) << ".\n";
    return 0;
}