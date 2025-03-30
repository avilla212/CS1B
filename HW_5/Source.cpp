// File: HW_5
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Write a program that creates a linked list of Box Records
// =============================================================================
// Description:
// Create a linked list of boxes in which the user can input different data types 
// into the list of boxes. The user can also be prompted to enter the id of a box 
// to be deleted. The program should allow the user to run repeatedly until the
// user decides to exit.
// =============================================================================

// Directives
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

// ===== Structure ==========================================================
// Description: Defines a Box struct to store box information.
// ========================================================================
struct Box {
    int id;              // Box ID number
    double height;       // Height of the box
    double width;        // Width of the box
    double length;       // Length of the box
    Box* next;           // Pointer to the next box in the linked list

    // Default Constructor
    Box(int id = 0, double h = 0, double w = 0, double l = 0) 
        : id(id), height(h), width(w), length(l), next(nullptr) {}
};

// ===== Class: BoxList ====================================================
// Description: Manages the linked list of Box records.
// ========================================================================
class BoxList {
public:
    // Default Constructor
    // Initializes an empty list with head and tail pointers set to null
    BoxList() : head(nullptr), tail(nullptr) {}

    // ===== Insert ===============================================
    // Description: Insert a box into the linked list.
    //
    // Input: Box object (dynamically allocated)
    //
    // Output: None
    // ============================================================
    void insert(Box* box) {
        if (!head) {  // If the list is empty, set head and tail to the new box
            head = tail = box;
        } else {  // Otherwise, add to the end of the list and update tail
            tail->next = box;
            tail = box;
        }
    }

    // ===== Display ===============================================
    // Description: Display the contents of the linked list.
    //
    // Input: None
    //
    // Output: None
    // ============================================================
    void display() const {
        if (!head) {
            cout << "The list is empty.\n";
            return;
        }

        // Display the list header
        cout << "ID\tHeight\tWidth\tLength\n";
        cout << "--------------------------------\n";
        cout << fixed << setprecision(2);

        // Traverse the list and print each box's details
        Box* current = head;
        while (current) {
            cout << current->id << "\t" << current->height << "\t" << current->width << "\t" << current->length << endl;
            current = current->next;
        }


    }

    // ===== Get Size ===============================================
    // Description: Returns the number of boxes in the linked list.
    //
    // Input: None
    //
    // Output: int (size of list)
    // ============================================================
    int getSize() const {
        // Traverse the list and count the number of boxes
        int size = 0;
        // Traverse the list and count the number of boxes
        Box* current = head;

        // Loop to count the number of boxes
        while (current) {
            // Increment the size and move to the next box
            size++;
            current = current->next;
        }

        return size;
    }

    // ===== Delete ===============================================
    // Description: Delete a box from the linked list based on ID.
    //
    // Input: int (ID of the box to delete)
    //
    // Output: bool (true if deleted, false if not found)
    // ============================================================
    bool deleteBox(int id) {
        // If the list is empty, display a message and return
        if (!head) {
            cout << "The list is empty.\n";
            return false;
        }

        // Traverse the list to find the box with the specified ID
        Box* current = head;
        Box* previous = nullptr;

        // Loop to find the box with the specified ID
        while (current) {
            // If the box is found, delete it and return true
            if (current->id == id) {
                if (current == head) {
                    head = head->next;  // If deleting head, move head forward
                    if (!head) tail = nullptr;  // If list is empty, reset tail
                } else {
                    previous->next = current->next;
                    if (!current->next) tail = previous;  // If last node is deleted, update tail
                }

                // Delete the box and return true
                delete current;
                return true;
            }
            // Move to the next box
            previous = current;
            current = current->next;
        }
        // If the box is not found, display a message and return false
        cout << "Box with ID " << id << " not found.\n";

        return false;
    }

    // Destructor: Frees allocated memory for all boxes in the list
    ~BoxList() {
        while (head) {
            Box* temp = head;
            head = head->next;
            delete temp;
        }
    }

private:
    Box* head;  // Pointer to the first box in the list
    Box* tail;  // Pointer to the last box in the list
};

// ===== Function: addBoxes =======================================
// Description: Handles user input to add boxes to the list.
// ==================================================================
void addBoxes(BoxList& list) {
    // Prompt the user to enter box specifications
    int id;
    double height, width, length;

    cout << "Enter box specifications (-1 to stop):\n";
    
    // Loop to add boxes until the user enters -1
    while (true) {
        // Prompt the user to enter box specifications
        cout << "Enter Box ID: ";
        cin >> id;
        if (id == -1){
            break;
        }

        // Prompt the user to enter box dimensions
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Enter Length: ";
        cin >> length;

        // Insert the new box into the list
        list.insert(new Box(id, height, width, length));

        cout << endl;
    }
}

// ===== Function: deleteBox =======================================
// Description: Handles user input to delete a box from the list.
// ==================================================================
void deleteBox(BoxList& list) {
    // If the list is empty, display a message and return
    if (list.getSize() == 0) {
        cout << "The list is empty.\n";
        return;
    }

    // Prompt the user to enter the ID of the box to delete
    int id;
    cout << "Enter the ID of the box to delete: ";
    cin >> id;

    // If the box is deleted successfully, clear the screen and display updated list
    if (list.deleteBox(id)) {
        system("cls");
        list.display();
    } else { // Otherwise, display a message that the box was not found
        cout << "Box not found.\n";
    }
}

// ===== Main Function =======================================
// Description: Controls the program flow.
// ==================================================================
int main() {
    BoxList list;  // Create a BoxList object

    while (true) {
        addBoxes(list);  // Add boxes to the list

        // Ask the user if they want to view the list
        char choice;
        cout << "Would you like to see the list of boxes? (y/n): ";
        cin >> choice;

        // If the user chooses to view the list, display it and delete a box if requested
        if (toupper(choice) != 'Y'){
            break;
        }

        // Clear the screen and display the list
        system("cls");
        list.display();  // Display the list
        deleteBox(list); // Delete a box if requested
    }

    return 0;
}

// =============================================================================
// End of Program

// ============== OUTPUT ==============
// Enter box specifications (-1 to stop):
// Enter Box ID: 100
// Enter Height: 1.1
// Enter Width: 2.2
// Enter Length: 3.3
//
// Enter Box ID: 101
// Enter Height: 4.4
// Enter Width: 5.5
// Enter Length: 6.6
//
// Enter Box ID: 102
// Enter Height: 7.7
// Enter Width: 8.8
// Enter Length: 9.9
//
// Enter Box ID: 103
// Enter Height: 10.1
// Enter Width: 11.2
// Enter Length: 12.3
//
// Enter Box ID: -1
// Would you like to see the list of boxes? (y/n): y
// ID      Height  Width   Length
// --------------------------------
// 100     1.10    2.20    3.30
// 101     4.40    5.50    6.60
// 102     7.70    8.80    9.90
// 103     10.10   11.20   12.30
// Enter the ID of the box to delete: 101
// ID      Height  Width   Length
// --------------------------------
// 100     1.10    2.20    3.30
// 102     7.70    8.80    9.90
// 103     10.10   11.20   12.30
// Would you like to see the list of boxes? (y/n): n
// Press any key to continue . . .
// ====================================
// End of Output