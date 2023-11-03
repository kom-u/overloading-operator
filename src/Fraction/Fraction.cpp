//
// Created by atqamz on 03/11/2023.
//

#include "Fraction.h"

Fraction::Fraction() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 5);
    
    this->numerator = dis(gen);
    this->denominator = 10;
}

[[maybe_unused]] Fraction::Fraction(double _numerator) {
    this->numerator = _numerator;
    this->denominator = 10;
}

Fraction::Fraction(double _numerator, double _denominator) {
    this->numerator = _numerator;
    this->denominator = _denominator;
}

void Fraction::Reduce() {
    double gcd = 1;
    for (int i = 1; i <= this->numerator && i <= this->denominator; ++i) {
        if (fmod(this->numerator, i) == 0 && fmod(this->denominator, i) == 0) {
            gcd = i;
        }
    }
    this->numerator /= gcd;
    this->denominator /= gcd;
}

std::ostream &operator<<(std::ostream &out, const Fraction &fraction) {
    out << fraction.numerator << "/" << fraction.denominator;
    return out;
}

std::istream &operator>>(std::istream &in, Fraction &fraction) {
    in >> fraction.numerator >> fraction.denominator;
    return in;
}

const Fraction Fraction::operator+(const Fraction &_fraction) const {
    Fraction fraction;
    fraction.numerator = (this->numerator * _fraction.denominator) + (this->denominator * _fraction.numerator);
    fraction.denominator = this->denominator * _fraction.denominator;
    fraction.Reduce();
    return fraction;
}

const Fraction Fraction::operator-(const Fraction &_fraction) const {
    Fraction fraction;
    fraction.numerator = (this->numerator * _fraction.denominator) - (this->denominator * _fraction.numerator);
    fraction.denominator = this->denominator * _fraction.denominator;
    fraction.Reduce();
    return fraction;
}

const Fraction Fraction::operator*(const Fraction &_fraction) const {
    Fraction fraction;
    fraction.numerator = this->numerator * _fraction.numerator;
    fraction.denominator = this->denominator * _fraction.denominator;
    fraction.Reduce();
    return fraction;
}

const Fraction Fraction::operator/(const Fraction &_fraction) const {
    Fraction fraction;
    fraction.numerator = this->numerator * _fraction.denominator;
    fraction.denominator = this->denominator * _fraction.numerator;
    fraction.Reduce();
    return fraction;
}

double Fraction::operator==(const Fraction &_fraction) const {
    return (this->numerator / this->denominator) == (_fraction.numerator / _fraction.denominator);
}

bool Fraction::operator<(int _fraction) const {
    return (this->numerator / this->denominator) < _fraction;
}

bool Fraction::operator>(int _fraction) const {
    return (this->numerator / this->denominator) > _fraction;
}

