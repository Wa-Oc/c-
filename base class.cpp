#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;

public:
    Student(string n, int id) {
        setName(n);  // Call base class function to set name
        studentID = id;
    }

    int getStudentID() const {
        return studentID;
    }
};

// Derived class: GraduateStudent
class GraduateStudent : public Student {
private:
    string researchTopic;

public:
    GraduateStudent(string n, int id, string topic) : Student(n, id) {
        researchTopic = topic;
    }

    string getResearchTopic() const {
        return researchTopic;
    }
};

int main() {
    // Create a Student object with name = "John" and studentID = 1001
    Student student("John", 1001);

    // Create a GraduateStudent object with name = "Alice", studentID = 2001, and researchTopic = "Artificial Intelligence"
    GraduateStudent gradStudent("Alice", 2001, "Artificial Intelligence");

    // Display the details of each object
    cout << "Student Name: " << student.getName() << ", Student ID: " << student.getStudentID() << endl;
    cout << "Graduate Student Name: " << gradStudent.getName() << ", Student ID: " << gradStudent.getStudentID() 
         << ", Research Topic: " << gradStudent.getResearchTopic() << endl;

    return 0;
}