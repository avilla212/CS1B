class Student:
    # Default constructor
    def __init__(self):
        self.name = "John"
        self.age = 20
        self.next = None

    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.next = None

class StudentList:
    def __init__(self):
        self.head = Student()
        self.tail = self.head
        
    
    def add(self, name, age):
        try:
            newStudent = Student(name, age)
            self.tail.next = newStudent
            self.tail = newStudent
        except:
            print("Error: Cannot add new student")

    def display(self):
        current = self.head
        while current != None:
            print(current.name, current.age)
            current = current.next

if __name__ == "__main__":
    studentList = StudentList()
    studentList.add("Alice", 21)
    studentList.add("Bob", 22)
    studentList.display()

    
