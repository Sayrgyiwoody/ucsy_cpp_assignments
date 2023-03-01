#include <iostream>
#include <ctype.h>
using namespace std;

int main () {
    char letter ;
    cout << "Enter a letter = " ;
    cin >> letter;
    int display = islower(letter);
    cout << "Zero or non-zero depending on lowercase or uppercase = " << display;
}