// Problem#19/2: Random 3 Numbers from 1 to 10.
#include <iostream>
using namespace std;
short Random_Num() {
    return rand() % 10 + 1;
}
void Print_Random() {
    for (short i = 0; i < 3; i++)
        cout << Random_Num() << ".\n";
}
int main()
{
    srand((unsigned)time(NULL));
    Print_Random();
    return 0;
}