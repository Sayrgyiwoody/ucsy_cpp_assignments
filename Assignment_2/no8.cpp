#include <iostream>
using namespace std;

int main () {
    int num_chair,num_guest , i ,possibility = 1 ;
    cout << "Enter the number of guests = ";
    cin >> num_guest;
    cout << "Enter the number of chairs = ";
    cin >> num_chair;
    while (num_guest>num_chair) {
        for (i=num_guest;i>(num_guest - num_chair);i--) {
            possibility *= i ;
        }
    cout << "The number of possible arrangements for guests = " << possibility << endl ;
    cout << "Enter the number of guests = ";
    cin >> num_guest;
    cout << "Enter the number of chairs = ";
    cin >> num_chair;
    possibility=1;
    }
    return 0;
}