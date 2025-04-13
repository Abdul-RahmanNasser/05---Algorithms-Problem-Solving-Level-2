// Problem#50/2: MySqrt.
#include <iostream>
using namespace std;
float Read_Num() {
    float num;
    do {
        cout << "Please, enter your positive number: ";
        cin >> num;
    } while (num <= 0);
    return num;
}
float My_Sqrt(float num) {
    return pow(num, 0.5);
}
int main()
{
    float num = Read_Num();
    cout << "\nMy sqrt result: "<<My_Sqrt(num)<<".\n";
    cout << "\nC++ sqrt result: " << sqrt(num) << ".\n";
}