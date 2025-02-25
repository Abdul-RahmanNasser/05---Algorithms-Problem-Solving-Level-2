// Prblem#20/2: Random Small Letter, Capital Letter, Special C, Digit in order.
#include <iostream>
using namespace std;
enum En_Char_Type { small_letter = 1, capital_letter, special_char, digit };
short Random_Number(short from, short to) { return rand() % (to - from + 1) + from; }
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
int main()
{
    srand((unsigned)time(NULL));
    cout << Print_Random(En_Char_Type::small_letter) << ".\n";
    cout << Print_Random(En_Char_Type::capital_letter) << ".\n";
    cout << Print_Random(En_Char_Type::special_char) << ".\n";
    cout << Print_Random(En_Char_Type::digit) << ".\n";
    return 0;
}