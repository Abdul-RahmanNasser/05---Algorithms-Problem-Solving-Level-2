// Problem#40/2: Copy Distinct Numbers to Array.
#include <iostream>
using namespace std;
void Fill_Arr1(short arr[100], short length) {
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}
short Return_Index(short arr[100], short length, short searched_num) {
    for (short i = 0; i < length; i++)
        if (searched_num == arr[i])
            return i;
    return -1;
}
bool Is_Number_Not_Found(short arr[100], short length, short searched_num) {
    return Return_Index(arr, length, searched_num) == -1;
}
void Add_Elements(short element, short arr[100], short& length) {
    length++;
    arr[length - 1] = element;
}
void Fill_Arr2(short arr1[100], short arr2[100], short length1, short& length2) {
    for (short i = 0; i < length1; i++)
        if (Is_Number_Not_Found(arr2, length2, arr1[i]))
            Add_Elements(arr1[i], arr2, length2);
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
    short arr1[100], arr2[100], length2 = 0;
    short length1 = 10;
    srand((unsigned)time(NULL));
    Fill_Arr1(arr1, length1);
    cout << "\nArray 1 elements: ";
    Print_Arr(arr1, length1);
    Fill_Arr2(arr1, arr2, length1, length2);
    cout << "\nArray 2 Distinct Numbers: ";
    Print_Arr(arr2, length2);
    return 0;
}