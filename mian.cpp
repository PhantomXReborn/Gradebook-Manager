#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// ==================== MISSING SEGMENT 1 ====================
struct Student {
    string name;
    int id;
    // MISSING: Add grades vector (vector<double>)
    // YOUR CODE HERE (1 line)
};

// ==================== MISSING SEGMENT 2 ====================
double calculateAverage(const vector<double>& grades) {
    if (grades.empty()) return 0;
    
    double sum = 0;
    // MISSING: Sum all grades
    // YOUR CODE HERE (3-4 lines)
    
    return sum / grades.size();
}

// ==================== MISSING SEGMENT 3 ====================
char letterGrade(double average) {
    // MISSING: Return letter grade based on average
    // A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60
    // YOUR CODE HERE (8-10 lines)
}

// ==================== MISSING SEGMENT 4 ====================
double calculateClassAverage(const vector<Student>& students) {
    if (students.empty()) return 0;
    
    double total = 0;
    // MISSING: Sum each student's average
    // YOUR CODE HERE (5-6 lines)
    
    return total / students.size();
}

// ==================== MISSING SEGMENT 5 ====================
Student findTopStudent(const vector<Student>& students) {
    if (students.empty()) {
        Student empty;
        empty.name = "None";
        return empty;
    }
    
    Student top = students[0];
    // MISSING: Find student with highest average
    // YOUR CODE HERE (6-7 lines)
    
    return top;
}

// ==================== MISSING SEGMENT 6 ====================
void displayGradeDistribution(const vector<Student>& students) {
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    
    // MISSING: Count students in each grade category
    // YOUR CODE HERE (8-10 lines)
    
    cout << "\n=== GRADE DISTRIBUTION ===" << endl;
    cout << "A: " << string(A, '*') << " (" << A << ")" << endl;
    cout << "B: " << string(B, '*') << " (" << B << ")" << endl;
    cout << "C: " << string(C, '*') << " (" << C << ")" << endl;
    cout << "D: " << string(D, '*') << " (" << D << ")" << endl;
    cout << "F: " << string(F, '*') << " (" << F << ")" << endl;
}

// ==================== MAIN FUNCTION ====================
int main() {
    vector<Student> students;
    int choice;
    
    cout << "=== GRADEBOOK MANAGER ===" << endl;
    
    do {
        cout << "\n1. Add Student" << endl;
        cout << "2. Add Grade to Student" << endl;
        cout << "3. View All Students" << endl;
        cout << "4. View Student Report" << endl;
        cout << "5. Class Summary" << endl;
        cout << "6. Grade Distribution" << endl;
        cout << "7. Find Top Student" << endl;
        cout << "8. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        
        if (choice == 1) {
            Student s;
            cout << "Name: "; cin.ignore(); getline(cin, s.name);
            cout << "ID: "; cin >> s.id;
            // MISSING: Initialize empty grades vector
            // YOUR CODE HERE (1 line)
            students.push_back(s);
            cout << "Student added!" << endl;
        }
        // MISSING: Add other menu options (2-7)
        // YOUR CODE HERE (50-60 lines)
        
    } while (choice != 8);
    
    return 0;
}