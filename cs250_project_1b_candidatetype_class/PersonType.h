//
//  PersonType.h
//  project 1
//
//  Created by Vincent Hoang on 3/3/18.
//

#ifndef PersonType_h
#define PersonType_h

class PersonType {
private:
    std::string mFirstName;
    std::string mLastName;
    int mSSN;
public:
    PersonType();
    PersonType(const int);
    PersonType(const std::string& firstName, const std::string& lastName, const int ssn);
    
    void setPersonInfo(const std::string& firstName, const std::string& lastName, const int ssn);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;
    
    void printName() const;
    std::string printSSN() const;
    void printPersonInfo() const;
    
    ~PersonType() {}
};

#endif /* PersonType_h */
