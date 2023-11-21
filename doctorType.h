#ifndef H_doctorType
#define H_doctorType
    #include "personType.h"

class doctorType: public personType
{
private:
    string doctorSpeciality;
public:
    void print() const;
    void setSpeciality(string speciality);
    string getName() const;
    string getSpeciality() const;
    doctorType(string speciality = "", string fn="", string ln="");
};


#endif