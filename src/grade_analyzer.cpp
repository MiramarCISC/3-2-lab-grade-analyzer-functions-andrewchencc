#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    return score1 + score2 + score3;
}

double calculateAverage(double total, int count) {
    if (count <= 0) {
        return 0.0;
    }

    return total / count;
}

char determineLetterGrade(double average) {
    if (average >= 90.0) {
        return 'A';
    } else if (average >= 80.0) {
        return 'B';
    } else if (average >= 70.0) {
        return 'C';
    } else if (average >= 60.0) {
        return 'D';
    }

    return 'F';
}

bool isPassing(double average) {
    return average >= 70.0;
}

bool isValidScore(double score) {
    return score >= 0.0 && score <= 100.0;
}

void printGradeReport(
    double total,
    double average,
    char letterGrade,
    bool passing
) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}