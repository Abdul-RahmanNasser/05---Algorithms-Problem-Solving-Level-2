// Problem#16/2: All Words From AAA To ZZZ.
#include <iostream>
using namespace std;
void Print_Third_Colomn(short i,short j) {
    for (short k = 65; k <= 90; k++)
        cout << char(i) << char(j) << char(k) << ".\n";
}
void Print_Second_Colomn(short i) {
    for (short j = 65; j <= 90; j++)
        Print_Third_Colomn(i, j);
}
void Print_All_Letters() {
    for (short i = 65; i <= 90; i++)
        Print_Second_Colomn(i);
}
int main()
{
    Print_All_Letters();
    return 0;
}