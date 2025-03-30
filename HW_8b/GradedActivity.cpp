#include "GradedActivity.h"

// Default constructor initializes score to 0.0
GradedActivity::GradedActivity() : score(0.0) {}

// Overloaded constructor
GradedActivity::GradedActivity(double testScore) : score(testScore) {}

// Destructor
GradedActivity::~GradedActivity() {}

// Mutator function
void GradedActivity::setSCore(double testScore) { this->score = testScore; }

// Accessor function
double GradedActivity::getScore() const { return this->score; }

// This function returns the letter grade for the score.
virtual char GradedActivity::getLetterGrade() const {
    char letterGrade; // To hold a letter grade

    // switch statement to determine the letter grade
    switch(static_cast<int>(score) / 10) {
        case 9: // 90-100
            letterGrade = 'A';
            break;
        case 8: // 80-89
            letterGrade = 'B';
            break;
        case 7: // 70-79
            letterGrade = 'C';
            break;
        case 6: // 60-69
            letterGrade = 'D';
            break;
        default: // 0-59
            letterGrade = 'F';
            break;
    }

    return letterGrade; // Return the letter grade
}