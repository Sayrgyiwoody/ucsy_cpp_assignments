#include <iostream>
using namespace std;

int main () {
    float gallonsPerCB = 7.481;
    float numOfGal , equivalent;

    cout << "Enter number of gallons = ";
    cin >> numOfGal ;
    equivalent = numOfGal * gallonsPerCB ;
    cout << "Equivalent for " << numOfGal << " gallons = " << equivalent ;
    
    return 0;
}