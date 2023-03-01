#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    char slash , calculate;
    cout << "Do you want to continue (y/n) = ";
    cin >> calculate;
    while (calculate == 'y') {
        cout << "Enter first number = " ;
        cin >> a >> slash >> b ;
        cout << "Enter second number = ";
        cin >> c >> slash >> d ;

        cout << "Addition : " << (a*d + b*c) << slash << (b*d) << endl;
        cout << "Subtraction : " << (a*d - b*c) << slash << (b*d) << endl;
        cout << "Addition : " << (a*c) << slash << (b*d) << endl;
        cout << "Addition : " << (a*d) << slash << (b*c) << endl;
    
    cout << "Do you want to continue (y/n) = ";
    cin >> calculate;
    }
    
    return 0;
}