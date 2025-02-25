// Problem#22/2: Repeated Elements Count In Array.
#include <iostream>
using namespace std;
short Read_Num_Of_Elements() {
    short num_of_elements;
    do {
        cout << "Please, enter the number of elements that greater than or equal 1 and less than or equal 100: ";
        cin >> num_of_elements;
    } while (num_of_elements < 1 || num_of_elements > 100);
    return num_of_elements;
}
void Read_Elements(int arr[100], short num_of_elements) {
    cout << "\nPlease, enter the elements of the array:\n";
    for (short i = 1; i <= num_of_elements; i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
}
void Print_Array(int arr[100], short num_of_elements) {
    int num, checked_num;
    short counter = 0;
    cout << "\nPlease, enter the number you want to check: ";
    cin >> num;
    cout << "\nOriginal array: ";
    for (short i = 1; i <= num_of_elements; i++) {
        cout << arr[i];
        if (i != num_of_elements)
            cout << " ";
        else
            cout << ".\n";
        if (arr[i] == num) {
            counter++;
            if (counter == 1)
                checked_num = num;
        }
    }
    cout << endl << checked_num << " is repeated " << counter;
    if (counter == 1)
        cout << " time.\n";
    else
        cout << " times.\n";
}
int main()
{
    short num_of_elements = Read_Num_Of_Elements();
    int arr[100];
    Read_Elements(arr, num_of_elements);
    Print_Array(arr, num_of_elements);
    return 0;
}