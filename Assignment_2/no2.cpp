#include <iostream>
using namespace std;

int main() {
    float temperature , fah_or_cel;
    

    cout << "Type 1 to convert Fahrenheit to Celsius ,\n 2 to convert Celsius to Fahrenheit : ";
    cin >> fah_or_cel;
    
    
    if (fah_or_cel == 1 ){
        cout << "Enter temperature in Fahrenheit : ";
        cin >> temperature;
        cout << "In Celsius that is : " << (temperature - 32) * 5/9 ;
    }else if (fah_or_cel == 2 ) {
        cout << "Enter temperature in Celsius : ";
        cin >> temperature;
        cout << "In fahrenheit that is : " << temperature * 9/5 + 32;
    }else {
        cout << "Invalid Input ! Enter only 1 or 2";
    }
        
    return 0;
}