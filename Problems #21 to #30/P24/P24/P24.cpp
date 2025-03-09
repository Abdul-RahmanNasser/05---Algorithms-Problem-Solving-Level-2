// Problem#24/2: Max of Random Array.
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
short Max_Element(short arr[100], short length) {
    short max_element = 0;
    for (short i = 0; i < length; i++)
        if (arr[i] > max_element)
            max_element = arr[i];
    return max_element;
}
int main() {
    short arr[100];
    short length = Read_Num("Please, enter the number of the elements is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr(arr, length);
    Print_Arr(arr, length);
    cout << "\nMax Number is: " << Max_Element(arr, length) << ".\n";
    return 0;
}