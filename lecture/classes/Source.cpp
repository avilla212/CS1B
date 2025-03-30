#include <iostream>

class Person { 
    protected:
        std::string name;
        int age;
        int id;
    public:
    
        Person() : name(""), age(0), id(0) {} // Default constructor

        Person(std::string n, int a, int i) : name(n), age(a), id(i) {} // Parameterized constructor

        Person(const Person &p) {
            name = p.name;
            age = p.age;
            id = p.id;
        }

        virtual void display() const {
            std::cout << "Name: " << name << ", Age: " << age << ", ID: " << id << std::endl;
        }

};

class Employee : Person {
    private:
        std::string title;
        double salary;

    public:
        Employee() : Person(), title(""), salary(0.0) {} // Default constructor

        Employee(std::string name, int age, int id, std::string title, double salary) 
            : Person(name, age, id), title(title), salary(salary) {} // Parameterized constructor

        Employee(const Employee &e) : Person(e) {
            title = e.title;
            salary = e.salary;
        }

        // What does override do?
        // // It indicates that this function is intended to override a virtual function in the base class.
        // // If the base class function is not virtual or if the signature does not match, the compiler will generate an error.
        void display() const override {
            Person::display(); // Call base class display
            std::cout << "Title: " << title << ", Salary: " << salary << std::endl;
        }
};

class Teacher : Employee {
    private:
        std::string subject;
        int yearsOfExperience;

    public:
        Teacher() : Employee(), subject(""), yearsOfExperience(0) {} // Default constructor

        Teacher(std::string name, int age, int id, std::string title, double salary, std::string subject, int yearsOfExperience) 
            : Employee(name, age, id, title, salary), subject(subject), yearsOfExperience(yearsOfExperience) {} // Parameterized constructor

        Teacher(const Teacher &t) : Employee(t) {
            subject = t.subject;
            yearsOfExperience = t.yearsOfExperience;
        }

        void display() const override {
            Employee::display(); // Call base class display
            std::cout << "Subject: " << subject << ", Years of Experience: " << yearsOfExperience << std::endl;
        }
};

int main(void){
    Person p1("John Doe", 30, 12345);
    Employee e1("Jane Smith", 28, 54321, "Software Engineer", 75000.0);
    Teacher t1("Alice Johnson", 35, 67890, "Math Teacher", 60000.0, "Mathematics", 10);

    p1.display();
    e1.display();
    t1.display();

    return 0;
}