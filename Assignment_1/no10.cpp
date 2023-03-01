#include <iostream>
using namespace std;

int main () {
    // a pound = 20 shillings;
    // a shilling = 12 pence;
    // a pound = 240 pence;

    float pound , shillings , pence , decimalPound;
    cout << "Enter pound = ";
    cin >> pound ;
    cout << "Enter shillings = ";
    cin >> shillings ;
    cout << "Enter pence = ";
    cin>> pence ;
    decimalPound = pound +  (shillings / 20 ) + ( pence / 240 ) ;
    cout << "Decimal pound = Euro " << decimalPound  ;
    return 0;
}