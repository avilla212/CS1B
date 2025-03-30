// Attached: HW_#4-B (Problem 1)
// File: HW #4-B
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Array of structs with dynamic memory allocation (4-B)
// =============================================================================
// Description:
// Create a car structure and a function to create an array of car structures
// and a function to find the most expensive car in the array.
// =============================================================================

// Directives
#include <iostream>
#include <string>

using namespace std;

// Structure
struct Car {
    // member variables
    string brand;
    int modelYear;
    float price;

    // member functions
    Car() {
        // default constructor
        brand = "";
        modelYear = 0;
        price = 0.0;
    }

    // parameterized constructor
    Car(string brand, int modelYear, float price) {
        
        this->brand = brand;
        this->modelYear = modelYear;
        this->price = price;
    }

    // ===== Create Car Array ================================================
    // This function creates an array of car structures
    //
    // Input: n - the number of cars to create
    //
    // Output: Car* - a pointer to the array of cars
    // =======================================================================
    Car* createCarAray(int n){
        // allocate memory for n car
        Car* carArray = new Car[n];

        // take user input for car details
        for (int i = 0; i < n; i++){
            cout << "Enter details for car " << i + 1 << endl;

            // Enter car brand
            cout << "Brand: ";
            // clear the input buffer
            cin.ignore();
            // get the input
            getline(cin, carArray[i].brand);

            // Enter car model year
            cout << "Model year: ";
            cin >> carArray[i].modelYear;

            // Enter car price
            cout << "Price: ";
            cin >> carArray[i].price;

            cout << endl;
        }

        // return the array of cars
        return carArray;
    }
    // end of createCarArray

    // ===== Find Most Expensive =============================================
    // This function finds the most expensive car in the array
    //
    // Input: cars - the array of cars
    //        n - the number of cars
    //
    // Output: Car* - a pointer to the most expensive car
    // =======================================================================
    Car* findMostExpensive(Car* cars, int n){
        // variable used to store the index of the most expensive car
        int mostExpensive = 0;

        // loop through the array of cars starting at the second value
        for (int i = 1; i < n; i++){
            // logic to find the most expensive car
            if (cars[i].price > cars[mostExpensive].price){
                mostExpensive = i;
            }
        }

        // ambersand returns the address of the most expensive car
        return &cars[mostExpensive];
    }
    // end of findMostExpensive
};

// ========= MAIN ==========================================================
//
// ========================================================================
int main(void){
    // variable to store the number of cars
    int n = 0;

    // Grab the number of cars from the user
    cout << "Enter the number of cars: ";
    cin >> n;
    cout << endl;

    // create a car object
    Car car;

    // create an array of cars
    Car* cars = car.createCarAray(n);

    // find the most expensive car
    Car* mostExpensiveCar = car.findMostExpensive(cars, n);

    // output the most expensive car
    cout << "Most expensive car: " << mostExpensiveCar->brand 
         << ", Model Year: " << mostExpensiveCar->modelYear << 
            ", Price: " << mostExpensiveCar->price << endl;
    
    
    return 0;
}
// end of main

// ===================== OUTPUT =====================
// Enter the number of cars: 3

// Enter details for car 1
// Brand: Toyota
// Model year: 2015
// Price: 15000

// Enter details for car 2
// Brand: BMW
// Model year: 2019
// Price: 40000

// Enter details for car 3
// Brand: Ford
// Model year: 2018
// Price: 25000

// Most expensive car: BMW, Model Year: 2019, Price: 40000
// =================================================
// End of Program









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