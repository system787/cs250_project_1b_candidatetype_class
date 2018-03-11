//
//  CandidateType.h
//  cs250_project_1b_candidatetype_class
//
//  Created by Vincent Hoang on 3/10/18.
//  Copyright © 2018 Vincent Hoang. All rights reserved.
//

#ifndef CandidateType_h
#define CandidateType_h

#include "PersonType.h"

const int NUM_OF_DIVISIONS = 4;

class CandidateType : public PersonType {
private:
    int mVotes;
    int mDivisions[NUM_OF_DIVISIONS];
public:
    CandidateType();
    void updateVotesByDivision(const int, const int);
    int getTotalVotes() const;
    int getVotesByDivision(const int) const;
    
    void printCandidateInfo() const;
    void printCandidateTotalVotes() const;
    void printCandidateDivisionVotes() const;
    
    ~CandidateType() {}
};


#endif /* CandidateType_h */
