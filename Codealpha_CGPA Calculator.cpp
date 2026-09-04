#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int subjects;

    cout << "Enter number of Subjects: ";
    cin >> subjects;

    if (subjects <= 0)
    {
        cout << "Invalid number of subjects!" << endl;
        return 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string subjectName[100];
    float grades[100];
        cout << "Enter credit hours: ";
        cin >> credits[i];

        if (credits[i] <= 0)
        {
            cout << "Invalid credit hours!" << endl;
            return 0;
        }

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n========== CGPA RESULT ==========\n";

    cout << left << setw(30) << "Subject"
         << setw(12) << "Grade"
         << setw(12) << "Credit" << endl;

    cout << "--------------------------------------------\n";

    for (int i = 0; i < subjects; i++)
    {
        cout << left << setw(30) << subjectName[i]
             << setw(12) << grades[i]
             << setw(12) << credits[i] << endl;
    }

    cout << "--------------------------------------------\n";

    cout << "Total Credits: " << totalCredits << endl;

    cout << fixed << setprecision(2);
    cout << "CGPA: " << cgpa << endl;

    cout << "============================================\n";

    return 0;
}