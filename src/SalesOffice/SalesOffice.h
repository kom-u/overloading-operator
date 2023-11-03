//
// Created by atqamz on 03/11/2023.
//

#ifndef TESTINGCLION_SALESOFFICE_H
#define TESTINGCLION_SALESOFFICE_H

#include <iostream>
#include <string>
#include <utility>

class SalesOffice {
private:
    std::string name;
    double sales;
    
public :
    SalesOffice(std::string _name, double _sales);
    double operator/(const SalesOffice& _salesOffice) const;
    
    friend std::ostream& operator<< (std::ostream& out, const SalesOffice& salesOffice);
};


#endif //TESTINGCLION_SALESOFFICE_H
