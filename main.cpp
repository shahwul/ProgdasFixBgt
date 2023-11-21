#include "personType.h"
#include "doctorType.h"
#include "dateType.h"
#include "billType.h"
#include "patientType.h"
#include <iomanip>
#include <bits/stdc++.h> 

#define MAX_NAME_LEN 30

template <typename T>
void displayInfo(const string& label, const T& value, int distance) {
    cout << left << setw(distance) << setfill(' ') << label << ": " << value << endl;
}

int main(){
    patientType patient1;
    doctorType doctor1;
    int length = 40;
    int labelDistance = 25;
    string dob,adm,dis;
    string fn,ln,pid,page;
    string dfn, dln, dspc;
    double mc, df, rc;

    cout << "INPUT DATA\n";
    cout << setw(length) << setfill('-') << "" << endl;
    cout << "Enter Date of Birth (DD/MM/YYYY): ";
    getline(cin, dob);
    patient1.setDoB(dob);
    cout << "Enter Admission Date (DD/MM/YYYY): ";
    getline(cin, adm);
    patient1.setAdmit(adm);
    cout << "Enter Discharge Date (DD/MM/YYYY): ";
    getline(cin, dis);
    patient1.setDischarge(dis);

    cout << "\nInput Patient's Data\n";
    cout << setw(length) << setfill('-') << "" << endl;
    cout << "Enter Patient's First Name: ";
    getline(cin, fn);
    cout << "Enter Patient's Last Name: ";
    getline(cin, ln);
    patient1.setName(fn,ln);
    cout << "Enter Patient's Id: ";
    getline(cin,pid);
    patient1.setId(pid);
    cout << "Enter Patient's Age: ";
    getline(cin,page);
    patient1.setAge(page);

    cout << "\n Input Doctor's Data\n";
    cout << setw(length) << setfill('-') << "" << endl;
    cout << "Enter Doctor's First Name (w/o dr.): ";
    getline(cin, dfn);
    cout << "Enter Doctor's Last Name: ";
    getline(cin, dln);
    doctor1.setName(dfn,dln);
    cout << "Enter Doctor's Speciality: ";
    getline(cin,dspc);
    doctor1.setSpeciality(dspc);

    cout << "\nInput Bill Data\n";
    cout << setw(length) << setfill('-') << "" << endl;
    cout << "Enter Medicine Charges: ";
    cin >> mc;
    cout << "Enter Doctor Fee: ";
    cin >> df;
    cout << "Enter Room Charges: ";
    cin >> rc;
    patient1.setCharges(mc,df,rc);
    
    cout << "\nPATIENT INFORMATION\n";
    cout << setw(length) << setfill('-') << "" << endl;
    displayInfo("Name", patient1.getName(), labelDistance);
    displayInfo("ID", patient1.getId(), labelDistance);
    displayInfo("Age", patient1.getAge(), labelDistance);
    displayInfo("Date of Birth", patient1.getDoB(), labelDistance);
    displayInfo("Admission Date", patient1.getAdmit(), labelDistance);
    displayInfo("Discharge Date", patient1.getDischarge(), labelDistance);

    cout << "\nDOCTOR INFORMATION\n";
    cout << setw(length) << setfill('-') << "" << endl;
    displayInfo("Name", doctor1.getName(), labelDistance);
    displayInfo("Speciality", doctor1.getSpeciality(), labelDistance);

    cout << "\nBILL INFORMATION\n";
    cout << setw(length) << setfill('-') << "" << endl;
    displayInfo("Patient's ID", patient1.getId(), labelDistance);
    displayInfo("Medicine Charges", patient1.getMedicineCharges(), labelDistance);
    displayInfo("Doctor Fee", patient1.getDoctorFee(), labelDistance);
    displayInfo("Room Charges", patient1.getRoomCharges(), labelDistance);
    displayInfo("Total Charges", patient1.getTotalCharges(), labelDistance);

    system("pause");
    return 0;
}
