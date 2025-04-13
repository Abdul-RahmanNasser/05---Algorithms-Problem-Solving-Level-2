// Problem#42/2: Count Odd Numbers in Array.
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
bool Check_Odd_Or_Not_Odd(short num) {
    if (num % 2 == 0)
        return 0;
    return 1;
}
short Return_Num_Of_Odds(short arr[100], short length) {
    short num_of_odds = 0;
    for (short i = 0; i < length; i++)
        if (Check_Odd_Or_Not_Odd(arr[i]))
            num_of_odds++;
    return num_of_odds;
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
    cout << "\nArray 1 elements: ";
    Print_Arr(arr, length);
    cout << "\nOdd numbers count is: " << Return_Num_Of_Odds(arr, length) << ".\n";
    return 0;
}