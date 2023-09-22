#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double totalGradePoints = 0.0;
    double totalCredits = 0.0;

    for (int i = 1; i <= numCourses; i++) {
        char grade;
        int credits;

        cout << "Enter grade for course " << i << " (A, A-, B+, B, B-, C+, C, C-, D+, D, D-, F): ";
        cin >> grade;

        cout << "Enter credit hours for course " << i << ": ";
        cin >> credits;

        double gradePoint;

        switch (grade) {
            case 'A':
                gradePoint = 4.0;
                break;
            case 'A-':
                gradePoint = 3.7;
                break;
            case 'B+':
                gradePoint = 3.3;
                break;
            case 'B':
                gradePoint = 3.0;
                break;
            case 'B-':
                gradePoint = 2.7;
                break;
            case 'C+':
                gradePoint = 2.3;
                break;
            case 'C':
                gradePoint = 2.0;
                break;
            case 'C-':
                gradePoint = 1.7;
                break;
            case 'D+':
                gradePoint = 1.3;
                break;
            case 'D':
                gradePoint = 1.0;
                break;
            case 'D-':
                gradePoint = 0.7;
                break;
            case 'F':
                gradePoint = 0.0;
                break;
            default:
                cout << "Invalid grade entered for course " << i << ". Please enter a valid grade." << endl;
                i--; // Decrement i to re-enter the grade for the current course.
                continue;
        }

        totalGradePoints += gradePoint * credits;
        totalCredits += credits;
    }

    if (totalCredits > 0) {
        double cgpa = totalGradePoints / totalCredits;
        cout << fixed << setprecision(2);
        cout << "Your CGPA is: " << cgpa << endl;
    } else {
        cout << "No valid courses entered. Cannot calculate CGPA." << endl;
    }

    return 0;
}
