#include "doctorType.h"

void doctorType::print() const
{
    cout << "Doctor's Name : dr.";
    personType::print();
    cout << "\nSpeciality = " << doctorSpeciality;
}

void doctorType::setSpeciality(string speciality)
{
    doctorSpeciality = speciality;
}

string doctorType::getName() const
{
    return "dr. " + personType::getName();
}

string doctorType::getSpeciality() const
{
    return doctorSpeciality;
}

doctorType::doctorType(string speciality, string fn, string ln)
{
    doctorSpeciality = speciality;
    personType::setName(fn,ln);
}
