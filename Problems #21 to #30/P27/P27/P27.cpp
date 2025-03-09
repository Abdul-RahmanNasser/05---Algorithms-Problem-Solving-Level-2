// Problem#26/2: Average of Random Array.
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
short Sum_Of_Elements(short arr[100], short length) {
    short sum = 0;
    for (short i = 0; i < length; i++)
        sum += arr[i];
    return sum;
}
float Avg_Of_Elements(short arr[100], short length) {
    return (float)Sum_Of_Elements(arr, length) / length;
}
int main() {
    short arr[100];
    short length = Read_Num("Please, enter the number of the elements is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr(arr, length);
    Print_Arr(arr, length);
    cout << "\nThe average of elements is: " << Avg_Of_Elements(arr, length) << ".\n";
    return 0;
}