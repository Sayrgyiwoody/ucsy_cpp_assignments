#include <iostream>
using namespace std;

int main() {
    float celsius,fahrenheit;
    cout << "Enter the amount of celsius = ";
    cin >> celsius;
    fahrenheit = ( celsius * 9/5 ) + 32 ;
    cout << celsius << " Celsius equal to " << fahrenheit << " Fahrenheit."; 

    return 0;
}