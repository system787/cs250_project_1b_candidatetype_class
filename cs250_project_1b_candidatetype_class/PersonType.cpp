/*
    Hoang, Vincent
 
    CS A250
    March 10, 2018
 
    Project 1B
 */

#include <iostream>
#include <string>
#include "PersonType.h"

PersonType::PersonType() {}

PersonType::PersonType(const std::string& firstName, const std::string& lastName, int ssn) {
    mFirstName = firstName;
    mLastName = lastName;
    mSSN = ssn;
}

PersonType::PersonType(const int ssn) {
    mSSN = ssn;
}

void PersonType::setPersonInfo(const std::string& firstName, const std::string& lastName, const int ssn) {
    mFirstName = firstName;
    mLastName = lastName;
    mSSN = ssn;
}

std::string PersonType::getFirstName() const {
    return mFirstName;
}

std::string PersonType::getLastName() const {
    return mLastName;
}

int PersonType::getSSN() const {
    return mSSN;
}

void PersonType::printName() const {
    std::cout << getLastName() << ", " << getFirstName() << std::endl;
}

std::string PersonType::printSSN() const {
    std::string ssn = std::to_string(getSSN());
    
    if (ssn.length() != 9) {
        throw std::invalid_argument("SSN must be 9 digits in length");
    }
    
    ssn.insert(6, "-");
    ssn.insert(3, "-");
    
    return ssn;
}

void PersonType::printPersonInfo() const {
    std::cout << printSSN() << " " << getFirstName() << " " << getLastName() << std::endl;
}
