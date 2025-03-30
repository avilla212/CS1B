#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H

#include "GradedActivity.h"

class PassFailExam : public GradedActivity {
    protected: 
    double minPassingScore; // Minimum passing score

    public:
    // Default constructor
    PassFailExam();

    // Overloaded constructor
    PassFailExam(double);

    // Destructor
    ~PassFailExam() {}

    // Mutator function
    void setMinPassingScore(double);

    // Accessor functions
    double getMinPassingScore() const;
    
    char getLetterGrade() const;
}

#endif // PASSFAILACTIVITY_H