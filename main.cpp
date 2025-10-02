#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    // 1️⃣ Original Money object
    Money purse(100, 10);  // $100.10
    cout << "Original purse: " << purse << endl;

    // 2️⃣ Test percent() function
    Money tenPercent = purse.percent(10); 
    cout << "10% of purse: " << tenPercent << endl;

    // 3️⃣ Test multiplication
    Money doubled = purse * 2;
    cout << "Doubled purse: " << doubled << endl;

    // 4️⃣ Test division
    Money half = purse / 2;
    cout << "Half of purse: " << half << endl;

    // 5️⃣ Test addition
    Money added = purse + Money(50, 25);
    cout << "Added $50.25: " << added << endl;

    // 6️⃣ Test subtraction
    Money subtracted = purse - Money(20, 50);
    cout << "Subtracted $20.50: " << subtracted << endl;

    // 7️⃣ Test cents normalization
    Money weird(5, 150); // 5 dollars, 150 cents → should normalize to $6.50
    cout << "Weird Money (5 dollars, 150 cents): " << weird << endl;

    Money negativeCents(10, -50); // 10 dollars, -50 cents → should normalize to $9.50
    cout << "Negative cents (10 dollars, -50 cents): " << negativeCents << endl;

    return 0;
}
