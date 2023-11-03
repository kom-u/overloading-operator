//
// Created by atqamz on 03/11/2023.
//

#include "SalesOffice.h"

SalesOffice::SalesOffice(std::string _name, double _sales) {
    this->name = std::move(_name);
    this->sales = _sales;
}

double SalesOffice::operator/(const SalesOffice& _salesOffice) const {
    return this->sales / _salesOffice.sales;
}

std::ostream &operator<<(std::ostream &out, const SalesOffice &salesOffice) {
    out << "The " << salesOffice.name << " office has sales of $" << salesOffice.sales << std::endl;
    return out;
}


