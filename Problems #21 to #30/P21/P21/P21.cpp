// Problem#21/2: Generate Keys.
#include <iostream>
using namespace std;
enum En_Char_Type { small_letter = 1, capital_letter, special_char, digit };
int Read_Num() {
    int num;
    cout << "Please, enter your number of trials: ";
    cin >> num;
    return num;
}
short Random_Number(short from, short to) {
    return rand() % (to - from + 1) + from;
}
char Print_Random(En_Char_Type random) {
    switch (random) {
    case En_Char_Type::small_letter:
        return char(Random_Number(97, 122));
    case En_Char_Type::capital_letter:
        return char(Random_Number(65, 90));
    case En_Char_Type::special_char:
        return char(Random_Number(33, 47));
    case En_Char_Type::digit:
        return char(Random_Number(48, 57));
    }
}
string One_key() {
    string key = "";
    for (short i = 1; i <= 19; i++)
        if (i % 5 == 0)
            key += '-';
        else
            key += Print_Random(En_Char_Type::capital_letter);
    return key;
}
void Print_All_keys(int num) {
    for (int i = 1; i <= num; i++)
        cout << "Key [" << i << "]: " << One_key() << ".\n";
}
int main()
{
    srand((unsigned)time(NULL));
    Print_All_keys(Read_Num());
    return 0;
}