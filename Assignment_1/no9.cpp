#include <iostream>
using namespace std;

int main() {
    float a,b,c,d;
    char slashChar ;
    cout << "Enter a/b = ";
    cin >> a >> slashChar >> b ;
    cout << "Enter c/d = ";
    cin >> c >> slashChar >> d ;
    
    cout << "a/b + c/d = " << (a*d + b*c) << slashChar << (b*d);
    return 0;
}