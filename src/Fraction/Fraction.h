//
// Created by atqamz on 03/11/2023.
//

#ifndef TESTINGCLION_FRACTION_H
#define TESTINGCLION_FRACTION_H

#include <iostream>
#include <random>
#include <cmath>

class Fraction {
private:
    double numerator;
    double denominator;
    
public:
    Fraction();

    [[maybe_unused]] explicit Fraction(double _numerator);
    Fraction(double _numerator, double _denominator);
    
    void Reduce();
    
    friend std::ostream& operator<< (std::ostream& out, const Fraction& fraction);
    friend std::istream& operator>> (std::istream& in, Fraction& fraction);

    Fraction operator+(const Fraction& _fraction) const;
    Fraction operator-(const Fraction& _fraction) const;
    Fraction operator*(const Fraction& _fraction) const;
    Fraction operator/(const Fraction& _fraction) const;
    double operator==(const Fraction& _fraction) const;
    bool operator<(int _fraction) const;
    bool operator>(int _fraction) const;

};


#endif //TESTINGCLION_FRACTION_H
