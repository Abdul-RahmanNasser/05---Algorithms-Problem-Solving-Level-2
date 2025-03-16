// Problem#34/2: Return number index in array.
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
short Return_Index(short arr[100], short length, short searched_num) {
    for (short i = 0; i < length; i++)
        if (searched_num == arr[i])
            return i;
    return -1;
}
void Print_Index(short index) {
    if (index == -1)
        cout << "\nThe number is not found: -(.\n";
    else {
        cout << "\nThe number is found, its position is: " << index << ",";
        cout << " and its order is: " << index + 1 << ".\n";
    }
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
    cout << "\nArray elements: ";
    Print_Arr(arr, length);
    short searched_num;
    cout << "\nPlease, enter a number to search for: ";
    cin >> searched_num;
    cout << "\nThe number you are looking for: " << searched_num << ".\n";
    short index = Return_Index(arr, length, searched_num);
    Print_Index(index);
    return 0;
}