#include <iostream>
using namespace std;

int main() {
    int num = 10;
    cout << "Original number = " << num << endl;
    num += num;
    cout << "Number after increment = " << num << endl;                                            
    cout << "Number after predecrement = " << --num << endl;
                                                                       
    return 0;                                                                                                    
}