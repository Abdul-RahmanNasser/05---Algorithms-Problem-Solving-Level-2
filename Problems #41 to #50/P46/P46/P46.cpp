// Problem#46/2: MyABS.
#include <iostream>
using namespace std;
int Read_Num() {
    int num;
    cout << "Please, enter your number: ";
    cin >> num;
    return num;
}
int Abs(int num) {
    if (num >= 0)
        return num;
    return -1 * num;
}
int main()
{
    int num = Read_Num();
    cout << "\nMy abs result: " << abs(num) << ".\n";
    cout << "\nC++ abs result: " << Abs(num) << ".\n";
}