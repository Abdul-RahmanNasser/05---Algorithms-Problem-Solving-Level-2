// Problem#49/2: MyCeil.
#include <iostream>
using namespace std;
float Read_Num() {
    float num;
    cout << "Please, enter your number: ";
    cin >> num;
    return num;
}
int My_Ceil(float num) {
    if (num > 0)
        return (int)num + 1;
    return (int)num;
}
int main()
{
    float num = Read_Num();
    cout << "\nMy ceil result: " << My_Ceil(num) << ".\n";
    cout << "\nC++ ceil result: " << ceil(num) << ".\n";
}