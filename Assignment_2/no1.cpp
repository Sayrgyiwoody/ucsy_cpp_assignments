#include <iostream>
using namespace std;

int main() {
    int num , i , j , count = 1;
    cout << "Enter Number = ";
    cin >> num;
    for (i = 0; i <20 ; i++){
        for(j=1;j<=10; j++){
            cout<< num * count << "\t";
            count++;
        }
        cout << endl;
    }
    return 0;
}