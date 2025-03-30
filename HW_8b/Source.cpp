// Attached: Source.cpp, GRadedActivity.cpp, GradedActivity.h, PassFailActivity.h, PassFailActivity.cpp,
// PassFailExam.h, PassFailExam.cpp
// File: HW_8-b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_#8-b Multiple Inheritance
// =============================================================================
// Description:
// This program demonstrates multiple inheritance by create a base class called GradedActivity
// and two derived classes called PassFailActivity and PassFailExam. 
// =============================================================================

// Library Include Statements
#include <iostream>
#include <iomanip>
#include "PassFailExam.h"

using namespace std;

// ============ Main ==================================================
//
// ====================================================================
int main()
{

    int questions; // Number of questions
    int missed; // Number of questions missed
    double minPassing; // The minimum passing score

    // Define a GradedActivity object.
    GradedActivity exam_1(88.0);

    // This demonstrates that the getLetterGrade() method is called by
    // the GradedActivity object.
    cout << "The student's grade on Exam #1 is "
         << exam_1.getLetterGrade() << endl << endl
         << "---------------------------\n\n";

    // Get the number of questions on the exam.
    cout << "How many questions are on the exam? ";
    cin >> questions;

    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Get the minimum passing score.
    cout << "Enter the minimum passing score for this test: ";
    cin >> minPassing;
    
    // Instantiate a PassFailExam object.
    PassFailExam exam_2(questions, missed, minPassing);
    
    // Display the test results.
    cout << fixed << setprecision(1);
    cout << "\nEach question counts "
         << exam_2.getPointsEach() << " points.\n";
    
    cout << "The minimum passing score is "
         << exam_2.getMinPassingScore() << endl;
    
    cout << "The student's exam score is "
         << exam_2.getScore() << endl;

    // This demonstrates that the getLetterGrade() method is redefined and is
    // called by the PassFailExam object.
    cout << "The student's grade on Exam #2 is "
         << exam_2.getLetterGrade() << endl;
         
    return 0;
}