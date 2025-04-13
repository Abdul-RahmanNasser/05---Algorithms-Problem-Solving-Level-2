// Problem#47/2: MyRound.
#include <iostream>
using namespace std;
float Read_Num() {
	float num;
	cout << "Please, enter your number: ";
	cin >> num;
	return num;
}
int My_Round(float num) {
	if (num > 0) {
		if ((int)num + 1 - num <= 0.5)
			return (int)num + 1;
		return (int)num;
	}
	else if (num < 0) {
		num *= -1;
		if ((int)num + 1 - num <= 0.5)
			return ((int)num + 1) * -1;
		return ((int)num) * -1;
	}
	else
		return 0;
}
int main()
{
	float num = Read_Num();
	cout << "\nMy round result: " << My_Round(num) << ".\n";
	cout << "\nC++ round result: " << round(num) << ".\n";
}