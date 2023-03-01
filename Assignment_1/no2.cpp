#include <iostream>
using namespace std;

int main()
{
    const int num1 = 10;
    int num2 = num1 + 10;
    int num3 = --num2;

    cout << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}
