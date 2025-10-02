#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
private:
    long dollars;
    int cents;

    void normalize(); // Helper to keep cents in 0-99

public:
    // Constructors
    Money(long d = 0, int c = 0);
    
    // Overloaded arithmetic operators
    Money operator+(const Money& other) const;
    Money operator-(const Money& other) const;
    Money operator*(double factor) const;
    Money operator/(double divisor) const;

    // Percent function
    Money percent(int percentFigure) const;

    // Overloaded insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Money& m);
};

#endif
