#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0;
	float totalGradePoints = 0;
    cout << "Enter number of courses: ";
    cin >> numCourses;
    vector<string> grades(numCourses);
    vector<float> creditHours(numCourses);
    vector<float> gradePoints(numCourses);

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;
        cout << "Enter Grade (A, A-, B+, B, C+, C, F): ";
        cin >> grades[i];
        cout << "Enter Credit Hours: ";
        cin >> creditHours[i];
        if (grades[i] == "A")
            gradePoints[i] = 4.0;
        else if (grades[i] == "A-")
            gradePoints[i] = 3.7;
        else if (grades[i] == "B+")
            gradePoints[i] = 3.3;
        else if (grades[i] == "B")
            gradePoints[i] = 3.0;
        else if (grades[i] == "C+")
            gradePoints[i] = 2.3;
        else if (grades[i] == "C")
            gradePoints[i] = 2.0;
        else
            gradePoints[i] = 0.0; // F

        totalCredits += creditHours[i];
        totalGradePoints += gradePoints[i] * creditHours[i];
    }

    float GPA = totalGradePoints / totalCredits;

    float CGPA = GPA;

    cout << "\n\n===== COURSE DETAILS@codealpha =====" << endl;
    cout << left << setw(10) << "Course"
         << setw(10) << "Grade"
         << setw(15) << "Credit Hrs" << endl;

    for (int i = 0; i < numCourses; i++) {
        cout << left << setw(10) << i + 1
             << setw(10) << grades[i]
             << setw(15) << creditHours[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "Semester GPA: " << GPA << endl;
    cout << "Final CGPA: " << CGPA << endl;
    cin.ignore();
cin.get();
return 0;
    
}
