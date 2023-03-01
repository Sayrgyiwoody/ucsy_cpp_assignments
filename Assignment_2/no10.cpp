#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    char slash,choice,_operator;
    cout << "Do you want to continue: ";
    cin >> choice ;
    while (choice == 'y') {
        cout << "Enter first fraction : ";
        cin >> a >> slash >> b;
        cout << "Enter operator : ";
        cin >> _operator;
        cout << "Enter second fraction : ";
        cin >> c >> slash >> d;
        switch (_operator) {
            case '+':
            cout << "Answer : " << a*d + b*c << slash << b*d << endl;
            break;
            case '-':
            cout << "Answer : " << a*d - b*c << slash << b*d << endl;
            break;
            case '*':
            cout << "Answer : " << a*c << slash << b*d <<endl;
            break;
            case '/':
            cout << "Answer : " << a*d << slash << b*c << endl;
            break;
            default:
            cout << "Wrong Operator!";
            break;
        }
        cout << "Do you want to continue: ";
        cin >> choice;
    }
    return 0;
}
