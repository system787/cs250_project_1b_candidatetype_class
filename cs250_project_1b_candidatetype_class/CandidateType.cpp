/*
 Hoang, Vincent
 
 CS A250
 March 10, 2018
 
 Project 1B
 */

#include "CandidateType.h"
#include <iostream>


CandidateType::CandidateType() {
    setPersonInfo("","",123456789);
}

void CandidateType::updateVotesByDivision(const int divisionNum, const int numVotes) {
    mDivisions[divisionNum] += numVotes;
}

int CandidateType::getTotalVotes() const {
    int totalVotes = 0;
    for (int i = 0; i < NUM_OF_DIVISIONS; i++) {
        totalVotes += mDivisions[i];
    }
    return totalVotes;
}

int CandidateType::getVotesByDivision(const int divisionNum) const {
    return mDivisions[divisionNum];
}

void CandidateType::printCandidateInfo() const {
    PersonType::printPersonInfo();
}

void CandidateType::printCandidateTotalVotes() const {
    PersonType::printName();
    std::cout << "=> Total Votes (all divisions): " << getTotalVotes() << std::endl;
}

void CandidateType::printCandidateDivisionVotes(const int divisionNum) const {
    PersonType::printName();
    std::cout << "=> Division # total votes: " << getVotesByDivision(divisionNum) << std::endl;
}
