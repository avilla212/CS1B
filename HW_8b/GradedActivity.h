#ifnedf GRADED_ACTIVITY_H
#define GRADED_ACTIVITY_H

#include <iostream>

class GradedActivity
{
    protected:
    double score; // To hold a score

    public:
    // Default constructor
    GradedActivity();

    // Overloaded constructor
    GradedActivity(double) : score(testScore) {}

    // Destructor
    ~GradedActivity() {}

    // Mutator function
    void setScore (double);

    // Accessor functions
    double getScore() const;

    virtual char getLetterGrade() const;

};


#endif // GRADED_ACTIVITY_H