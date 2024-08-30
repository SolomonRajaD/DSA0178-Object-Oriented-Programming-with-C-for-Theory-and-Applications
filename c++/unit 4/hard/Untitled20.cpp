#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string patientName;
    int bedNumber;
    int wardNumber;
public:
    void inputPatientDetails() {
        cout << "Enter Patient Name: ";
        cin.ignore();
        getline(cin, patientName);
        cout << "Enter Bed Number: ";
        cin >> bedNumber;
        cout << "Enter Ward Name: ";
        cin >> wardNumber;
    }

    void displayPatientDetails() {
        cout << "Patient Name: " << patientName << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardNumber << endl;
    }
};

class Doctor {
protected:
    string doctorName;
    string doctorateDegree;
public:
    void inputDoctorDetails() {
        cout << "Enter the Doctor Name: ";
        cin.ignore();
        getline(cin, doctorName);
        cout << "Enter Doctorate Degree: ";
        getline(cin, doctorateDegree);
    }

    void displayDoctorDetails() {
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Doctorate Degree: " << doctorateDegree << endl;
    }
};

class PatientDetails : public Patient, public Doctor {
private:
    float dues;
public:
    void inputDetails() {
        inputPatientDetails();
        inputDoctorDetails();
        cout << "Enter Dues of Patient: ";
        cin >> dues;
    }

    void displayDetails() {
        cout << "Inserted Data is:" << endl;
        displayPatientDetails();
        displayDoctorDetails();
        cout << "Total Dues of Patient: " << dues << endl;
    }
};

int main() {
    PatientDetails pd;
    pd.inputDetails();
    pd.displayDetails();
    return 0;
}

