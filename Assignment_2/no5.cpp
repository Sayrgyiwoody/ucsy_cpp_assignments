#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number or 0 to exit = ";
    cin >> n;
    while (n!=0) {
        int result = 1;
        for (int i =1;i<=n;i++) {
            result *= i;
        }
        cout << "Factorial for " << n << " = " <<result << endl;
    cout << "Enter a number or 0 to exit = ";
    cin >> n;
    }
    cout << "End Of Program";
}