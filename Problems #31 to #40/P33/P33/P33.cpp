// Problem#33/2: Fill Array With Keys.
#include <iostream>
using namespace std;
enum En_Char_Type { small_letter = 1, capital_letter, special_char, digit };
short Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num < 1 || num>100);
    return num;
}
short Random_Num(short from, short to) {
    return rand() % (to - from + 1) + from;
}
char Print_Random(En_Char_Type random) {
    switch (random) {
    case En_Char_Type::small_letter:
        return char(Random_Num(97, 122));
    case En_Char_Type::capital_letter:
        return char(Random_Num(65, 90));
    case En_Char_Type::special_char:
        return char(Random_Num(33, 47));
    case En_Char_Type::digit:
        return char(Random_Num(48, 57));
    }
}
string One_Key() {
    string key = "";
    for (short i = 1; i <= 19; i++)
        if (i % 5 == 0)
            key += '-';
        else
            key += Print_Random(En_Char_Type::capital_letter);
    return key;
}
void Fill_Arr(string arr[100], short length) {
    for (short i = 0; i < length; i++)
        arr[i] = One_Key();
}
void Print_Arr(string arr[100], short length) {
    for (short i = 0; i < length; i++)
        cout << "Array [" << i << "]: " << arr[i] << ".\n";
}
int main() {
    string arr[100];
    short length = Read_Num("Please, enter the number of the keys is from 1 to 100: ");
    srand((unsigned)time(NULL));
    Fill_Arr(arr, length);
    cout << "\nArray elements:\n";
    Print_Arr(arr, length);
    return 0;
}