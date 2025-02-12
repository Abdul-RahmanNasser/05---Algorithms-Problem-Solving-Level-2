// Problem03/2: Perfect Number.
#include <iostream>
using namespace std;
enum En_Is_Perfect { perfect = 1, not_perfect };
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
int Calculate_Sum(int num) {
    int sum = 0;
    for (int i = 1; i <= (num / 2); i++)
        if (num % i == 0) {
            cout << i;
            sum += i;
            if (i != num / 2)
                cout << " + ";
        }
    return sum;
}
En_Is_Perfect Is_Perfect(int sum, int num) {
    if (sum == num)
        return En_Is_Perfect::perfect;
    return En_Is_Perfect::not_perfect;
}
void Print_Is_Perfect(int sum, int num) {
    cout << " = " << sum << ".\n";
    if (Is_Perfect(sum, num) == En_Is_Perfect::perfect)
        cout << num << " is perfect.\n";
    else
        cout << num << " is not perfect.\n";
}
int main()
{
    int num = Read_Num("Please, enter a positive number: ");
    int sum = Calculate_Sum(num);
    Print_Is_Perfect(sum, num);
    return 0;
}