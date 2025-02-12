// Problem04/2: Perfect Number from 1 to N.
#include <iostream>
using namespace std;
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
        if (num % i == 0)
            sum += i;
    return sum;
}
bool Is_Perfect(int sum, int num) { return sum == num; }
void Print_All_Perfect_Numbers_From_1_To_N(int num) {
    for (int i = 1; i <= num; i++)
        if (Is_Perfect(Calculate_Sum(i), i))
            cout << i << ".\n";
}
int main()
{
    int num = Read_Num("Please, enter a positive number: ");
    Print_All_Perfect_Numbers_From_1_To_N(num);
    return 0;
}