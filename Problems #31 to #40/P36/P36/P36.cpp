// Problem#36/2: Add Array Element Simi Dynamic
#include <iostream>
using namespace std;
short Read_Num() {
    int num;
    do {
        cout << "Please, enter an element is from 1 to 100: ";
        cin >> num;
    } while (num < 1 || num>100);
    return num;
}
void Add_Elements(short element, short arr[100], short& length) {
    length++;
    arr[length - 1] = element;
}
void Input_User_Numbers_In_Array(short arr[100], short& length) {
    bool add_more;
    do {
        Add_Elements(Read_Num(), arr, length);
        cout << "\nDo you want to add more numbers (1 / 0)?\n";
        cin >> add_more;
        cout << endl;
    } while (add_more);
}
void Print_Arr(short arr[100], short length) {
    cout << "\nArray length: "<<length<<".\n";
    cout << "\nArray elements: ";
    for (short i = 0; i < length; i++) {
        cout << arr[i];
        if (i == length - 1)
            cout << ".\n";
        else
            cout << " ";
    }
}
int main() {
    short arr[100], length = 0;
    srand((unsigned)time(NULL));
    Input_User_Numbers_In_Array(arr, length);
    Print_Arr(arr, length);
    return 0;
}