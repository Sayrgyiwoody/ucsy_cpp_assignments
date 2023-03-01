#include <iostream>
using namespace std;

int main() {
    char Operator ;
    float num1 , num2 ;
    char calculate;
    cout << "Do you want to calculate (y/n) :" ;
    cin >> calculate;
    while (calculate == 'y') {
        cout << "Enter first number , Operator , second number : \n";
        cin >> num1 >> Operator >> num2;

        switch (Operator)
        {
        case ('+'):
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case ('-'):
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case ('*'):
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case ('/'):
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
        cout << "Wrong Operator ! ";
        break;
        }
        cout << "Do you want to calculate (y/n) :" ;
        cin >> calculate;
    }
    
    return 0 ;
}