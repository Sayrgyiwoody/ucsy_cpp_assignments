#include <iostream>
using namespace std;

int main() {
    const int num1 = 10;
    int num2 = num1;
    num2+=10;
    cout << num1 << " " << num2 << " " << --num2;
    return 0;
}
