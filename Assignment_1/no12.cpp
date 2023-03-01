#include <iostream>
using namespace std;

int main () {
    float decPounds;
    
    cout << "Enter decimal Pounds = " ;
    cin >> decPounds ;

    int pound = static_cast<int>(decPounds);
    int shillings = static_cast<int>((decPounds - pound)*20);
    int pence = static_cast<int>((((decPounds - pound) * 20 ) - shillings ) * 12) ;

    cout << "Old notation = " << pound << "." << shillings << "." << pence ;
    return 0;
}