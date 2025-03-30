// Attached: HW_#4-B (Problem 2)
// File: HW #4-B (Struct)
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Deep copy of a struct
// =============================================================================
// Description:
// Create a Struct for a paerson with a name and age. Write a function that 
// returns a deep copy of the struct by taking a pointer to the struct as an
// argument. We will not modify the original struct and we will properly delete 
// the memory allocated for the deep copy.
// =============================================================================

// Directives
#include <iostream>
#include <string>

using namespace std;

// Global function to print a new line
// Input: COUT - the output stream
// Output: COUT - the output stream with a new line
// Written for fun please dont dock me points :D
ostream& newLine(ostream& COUT){
    return COUT << endl;
}

// Structure
struct Person{
    // member variables
    string name;
    int age;

    // member functions
    Person(){
        // default constructor
        name = "";
        age = 0;
    }

    // parameterized constructor
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    // ===== Deep Copy ========================================================
    // This function returns a deep copy of the struct
    //
    // Input: person - a pointer to the struct
    //
    // Output: Person - a deep copy of the struct
    // =========================================================================

    Person deepCopy(Person* person){
        // allocate memory for the deep copy
        Person deepCopyPerson(person->name, person->age);

        // return the deep copy
        return deepCopyPerson;
    }
    // end of deepCopy
};

// ========= MAIN ==========================================================
//
// ========================================================================
int main(void){
    // create a person object
    Person person;

    // create a person struct
    Person* personPtr = new Person("Alice", 25);

    // create a deep copy of the person struct
    Person deepCopyPerson = person.deepCopy(personPtr);

    // print the deep copy
    cout << "Original Person: " << personPtr->name << ", Age " << personPtr->age << endl;
    cout << "Deep Copy: " << deepCopyPerson.name << ", Age" << deepCopyPerson.age << endl;
    cout << newLine;


    // Modify the deep copy
    cout << "Modifying copied person..." << endl;
    deepCopyPerson.name = "Bob";
    deepCopyPerson.age = 30;
    cout << newLine;

    // print the deep copy
    cout << "Original Person: " << personPtr->name << ", Age" << personPtr->age << endl;
    cout << "Deep Copy: " << deepCopyPerson.name << ", Age" << deepCopyPerson.age << endl;

    // delete the memory allocated for the deep copy
    delete personPtr;

    return 0;
}
// end of main

// ============== OUTPUT =====================
// Original Person: Alice, 25
// Deep Copy: Alice, 25

// Modifying copied person...

// Original Person: Alice, 25
// Deep Copy: Bob, 30

// ===========================================