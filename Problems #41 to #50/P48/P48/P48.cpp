// Problem#48/2: MyFloor.
#include <iostream>
using namespace std;
float Read_Num() {
    float num;
    cout << "Please, enter your number: ";
    cin >> num;
    return num;
}
int My_Floor(float num) {
	if (num >= 0)
		return (int)num;
	return (int)num - 1;
}
int main()
{
    float num = Read_Num();
    cout << "\nMy floor result: " << My_Floor(num) << ".\n";
    cout << "\nC++ floor result: " << floor(num) << ".\n";
}