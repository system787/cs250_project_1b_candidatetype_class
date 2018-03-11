//
//  CandidateType.cpp
//  cs250_project_1b_candidatetype_class
//
//  Created by Vincent Hoang on 3/10/18.
//  Copyright © 2018 Vincent Hoang. All rights reserved.
//

#include "CandidateType.h"


CandidateType::CandidateType() {
    setPersonInfo("","",0);
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


