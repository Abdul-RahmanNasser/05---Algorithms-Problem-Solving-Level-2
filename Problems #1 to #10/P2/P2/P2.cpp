// Problem#02/2: Print All Prime Numbers 1 to N.
#include <iostream>
using namespace std;
//enum en_Prim_Not_Prime { prime = 1, not_prime };
int Read_Num(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}
bool Check_Prime(int num) {
    for (int i = 2; i <= (num / 2); i++)
        if (num % i == 0)
            return 0;
    return 1;
}
/*en_Prim_Not_Prime Check_Prime_Or_Not_Prime(int num) {
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return en_Prim_Not_Prime::not_prime;
    return en_Prim_Not_Prime::prime;
}*/
void Print_Primes(int num) {
    cout << "\nPrime Numbers from " << 1 << " to " << num << " are :\n";
    for (int i = 1; i <= num; i++)
        if (Check_Prime(i))
            cout << i << ".\n";
}
/*void Print_Prime_Numbers_From_1_To_N(int num) {
    cout << "\nPrime Numbers from " << 1 << " to " << num << " are :\n";
    for (int i = 1; i <= num; i++)
        if (Check_Prime_Or_Not_Prime(i) == en_Prim_Not_Prime::prime)
          cout << i << ".\n";
}*/
int main() {
    Print_Primes(Read_Num("Please, enter a positive number: "));
    /*cout << endl;
    Print_Prime_Numbers_From_1_To_N(Read_Num("Please, enter a positive number: "));*/
    return 0;
}