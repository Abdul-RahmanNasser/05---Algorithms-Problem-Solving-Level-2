// Problem#01/2: Multiplication Table 1 to 10.
#include <iostream>
using namespace std;
void Print_Headers() {
    cout << "    -";
    for (int k = 1; k <= 10; k++)
        cout << "----";
    cout << "\n    |";
    for (int k = 1; k <= 10; k++) {
        if (k != 10)
            cout << " " << k << " |";
        else
            cout << k << " |";
    }
    cout << endl;
}
void Print_Blocks() {
    cout << "----|";
    for (int k = 1; k <= 10; k++)
        cout << "---|";
    cout << endl;
}
void Print_Horizontal(int j) {
    for (int i = 1; i <= 10; i++) {
        if (i == 1) {
            if (j != 10)
                cout << "| " << j << " |";
            else
                cout << "|" << j << " |";
        }
        if (i * j < 10)
            cout << " " << i * j << " |";
        else if (i * j < 100)
            cout << i * j << " |";
        else
            cout << i * j << "|";
    }
    cout << endl;
}
void Print_Table() {
    Print_Headers();
    Print_Blocks();
    for (int j = 1; j <= 10; j++) {
        Print_Horizontal(j);
        if (j == 10) {
            cout << "-----";
            for (int k = 1; k <= 10; k++)
                cout << "----";
            cout << endl;
        }
        else
            Print_Blocks();
    }
}
int main()
{
    Print_Table();
    return 0;
}