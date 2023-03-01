#include <iostream>

using namespace std;

int main()
{
double usd;
double britishPound = 1.487;
double frenchFranc = 0.172;
double germanDeutschemark = 0.584;
double japaneseYen = 0.00955;

cout << "Enter amount in US dollars: ";
cin >> usd;

cout << "Converted to British pounds: " << usd / britishPound << endl;
cout << "Converted to French francs: " << usd / frenchFranc << endl;
cout << "Converted to German deutschemarks: " << usd / germanDeutschemark << endl;
cout << "Converted to Japanese yen: " << usd / japaneseYen << endl;

return 0;
}