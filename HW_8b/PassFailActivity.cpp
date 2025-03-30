#inlcude "PassFailActivity.h"

// Default constructor initializes score to 0.0 and minPassingScore to 60.0
PassFailExam::PassFailExam() : GradedActivity(), minPassingScore(60.0) {}

// Overloaded constructor
PassFailExam::PassFailExam(double mps) : GradedActivity(), minPassingScore(mps) {}

// Destructor
PassFailExam::~PassFailExam() {}

// Mutator function
void PassFailExam::setMinPassingSCore(double mps) { this->minPassingScore = mps; }

// Accessor function
double PassFailExam::getMinPassingScore() const { return this->minPassingScore; }

// This function returns the letter grade for the score. This function is a redefintion of the function in GradedActivity.
char PassFailExam::getLetterGrade() const {
    char letterGrade; // To hold a letter grade

    // If the score is greater than or equal to the minimum passing score,
    // return 'P' for pass. Otherwise, return 'F' for fail.
    if (score >= minPassingScore) {
        letterGrade = 'P';
    } else {
        letterGrade = 'F';
    }

    return letterGrade; // Return the letter grade
}
