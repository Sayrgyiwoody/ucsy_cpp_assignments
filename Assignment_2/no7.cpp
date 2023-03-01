#include <iostream>
using namespace std;

int main() {
    int pounds1,shillings1,pence1,pounds2,shillings2,pence2;
    char dot , calculate ;
    cout << "Do you want to continue (y/n) = ";
    cin >> calculate;
    while (calculate == 'y') {
        cout << "Enter first amount : ";
        cin >> pounds1 >> dot >> shillings1 >> dot >> pence1 ;
        cout << "Enter second Amount : ";
        cin >> pounds2 >> dot >> shillings2 >> dot >> pence2 ;
        int total_pounds = pounds1 + pounds2 ;
        int total_shillings = shillings1 + shillings2 ;
        int total_pence = pence1 + pence2 ;

        // 12 pence = 1 shillings so we add every 12 pence to 1 shillings
        while (total_pence>=12) {
            total_shillings ++;
            total_pence -= 12;
        }

        // This is also the same as above 20 shillings = 1 pound but we dont have to do this to pound because pound is the highest 
        while (total_shillings>=20) {
            total_pounds ++;
            total_shillings -= 20;
        }

        cout << "Total is : " << total_pounds << dot << total_shillings << dot << total_pence<< endl;
        cout << "Do you want to continue (y/n) = ";
        cin >> calculate;
    }
    cout << "End of Program";
    return 0;
}