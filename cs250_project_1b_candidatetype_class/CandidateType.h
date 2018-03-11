/*
 Hoang, Vincent
 
 CS A250
 March 10, 2018
 
 Project 1B
 */

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
    void printCandidateDivisionVotes(const int) const;
    
    ~CandidateType() {}
};


#endif /* CandidateType_h */
