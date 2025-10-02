#include "Money.h"
#include <iostream>
#include <cmath>

using namespace std;

// Helper to normalize cents
void Money::normalize() {
    if (cents >= 100) {
        dollars += cents / 100;
        cents = cents % 100;
    } else if (cents < 0) {
        long borrow = (abs(cents) + 99) / 100;
        dollars -= borrow;
        cents += borrow * 100;
    }
}

// Constructor
Money::Money(long d, int c) : dollars(d), cents(c) {
    normalize();
}

// Operator +
Money Money::operator+(const Money& other) const {
    Money result(dollars + other.dollars, cents + other.cents);
    result.normalize();
    return result;
}

// Operator -
Money Money::operator-(const Money& other) const {
    Money result(dollars - other.dollars, cents - other.cents);
    result.normalize();
    return result;
}

// Operator *
Money Money::operator*(double factor) const {
    double total = (dollars + cents / 100.0) * factor;
    long newDollars = static_cast<long>(total);
    int newCents = static_cast<int>(round((total - newDollars) * 100));
    return Money(newDollars, newCents);
}

// Operator /
Money Money::operator/(double divisor) const {
    double total = (dollars + cents / 100.0) / divisor;
    long newDollars = static_cast<long>(total);
    int newCents = static_cast<int>(round((total - newDollars) * 100));
    return Money(newDollars, newCents);
}

// percent() function
Money Money::percent(int percentFigure) const {
    double total = (dollars + cents / 100.0) * percentFigure / 100.0;
    long newDollars = static_cast<long>(total);
    int newCents = static_cast<int>(round((total - newDollars) * 100));
    return Money(newDollars, newCents);
}

// Overloaded << operator
ostream& operator<<(ostream& out, const Money& m) {
    out << "$" << m.dollars << ".";
    if (m.cents < 10) out << "0";
    out << m.cents;
    return out;
}
