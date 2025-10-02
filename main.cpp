#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money purse(100, 10); // $100.10
    cout << "Original purse: " << purse << endl;

    Money tenPercent = purse.percent(10); 
    cout << "10% of purse: " << tenPercent << endl;

    Money doubled = purse * 2;
    cout << "Doubled purse: " << doubled << endl;

    Money half = purse / 2;
    cout << "Half of purse: " << half << endl;

    Money added = purse + Money(50, 25);
    cout << "Added $50.25: " << added << endl;

    Money subtracted = purse - Money(20, 50);
    cout << "Subtracted $20.50: " << subtracted << endl;

    return 0;
}
