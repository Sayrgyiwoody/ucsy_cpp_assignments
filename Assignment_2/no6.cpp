#include <iostream>
using namespace std;

int main() {
    float initial,years,interest_rate,interest,dollar=0,i;
    cout << "Enter initial amount = " ;
    cin >> initial;
    cout << "Enter number of years = " ;
    cin >> years ;
    cout << "Enter interest rate (percent per year) = ";
    cin >> interest_rate;
    interest_rate /= 100;
    float final_amount = initial;
    for (i = 0; i<years;i++) {
        final_amount =final_amount + (final_amount*interest_rate);
    }
    cout << "At the end of 10 years , you will have " << final_amount<< " dollars.";
    return 0;
}