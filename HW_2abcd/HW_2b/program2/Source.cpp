// Attached: HW_#2B
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program:  Create two one dimensional arrays of 5 random integers each
// =============================================================================
// Description:
// Create two one dimensional arrays of 5 random integers each
// Then merge the two arrays into a third array
// =============================================================================

#include <iostream>

using namespace std;

// Constants
const int SIZE = 5;

// Function prototypes
void getValues(int[]);
int* mergeArrays(int[], int[]);
void printArray(int[]);
void printMerged(int[]);

// === main =====================================================================
//
// =============================================================================
int main(void){

    // Initialize random seed
    srand(time(0));

    // Declare variables
    int numbers1[SIZE] = {0};
    int numbers2[SIZE] = {0};
    int numbers3[SIZE * 2] = {0};

    // Fill arrays with random values
    getValues(numbers1);
    getValues(numbers2);

    // Print arrays
    cout << "Array 1: ";
    printArray(numbers1);

    cout << "Array 2: ";
    printArray(numbers2);

    // Merge arrays
    cout << "Merged array: ";
    int* merged= mergeArrays(numbers1, numbers2);

    // Print merged array
    printMerged(merged);

    // Deallocate memory
    delete[] merged;
    
    // Checking if memory is deallocated
    merged = nullptr;

    if (merged == nullptr){
        cout << "Merged array deleted";
    }
    return 0;
}

/* --- getValues ----------------------------------------------------------
This function will fill an array with random values between 100 and 199

Input: int numbers[] - an array of integers
Output: None
*/
void getValues(int numbers[]){
    for (int i = 0; i < SIZE; i++){
        // Generate random number between 100 and 199
        numbers[i] = (rand() % 199) + 100;
    }
}

/* --- mergeArrays --------------------------------------------------------
This function will merge two arrays into a new array

Input: int numbers1[] - an array of integers
       int numbers2[] - an array of integers
       int mergedArray[] - an array of integers
Output: int* - a pointer to the merged array
*/
int* mergeArrays(int numbers1[], int numbers2[]){
    int* mergedArray = new int[SIZE * 2];
    
    int* ptr1 = numbers1;
    int* ptr2 = numbers2;
    int* ptr3 = mergedArray;
    
    while (ptr1 < numbers1 + SIZE && ptr2 < numbers2 + SIZE){
        // Value from ptr1 is stored in ptr3 by dereferencing 
        *ptr3 = *ptr1;
        // Increment ptr3 to the next element in numbers3
        ptr3++;
        // Value from ptr2 is stored in ptr3 by dereferencing
        *ptr3 = *ptr2;
        
        // Increment ptr3 to the next element
        ptr3++;
        ptr1++;
        ptr2++;
    }

     // Add remaining elements from numbers1, if any
    while (ptr1 < numbers1 + SIZE) {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
    }

    // Add remaining elements from numbers2, if any
    while (ptr2 < numbers2 + SIZE) {
        *ptr3 = *ptr2;
        ptr2++;
        ptr3++;
    }

    return mergedArray;
}

/* --- printArray ---------------------------------------------------------
This function will print the values of an array

Input: int numbers[] - an array of integers
Output: None
*/
void printArray(int numbers[]){
    for (int i = 0; i < SIZE; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}
// end of printArray()

/* --- printMergedArray ---------------------------------------------------------
This function will print the values of a merged array

Input: int numbers[] - an array of integers
Output: None
*/
void printMerged(int merged[]){
    for (int i = 0; i < SIZE * 2; i++){
        cout << merged[i] << " ";
    }
    cout << endl;
}
// end of printMergedArray()

// === Output ====================================================================
// Array 1: 221 184 291 252 165 
// Array 2: 231 113 225 157 278
// Merged array: 221 231 184 113 291 225 252 157 165 278
// Merged array deleted
// ============================================================================