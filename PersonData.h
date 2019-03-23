//
// Created by Giles Pierre Carlos on 2019-03-21.
//

#ifndef PERSONDATA_PERSONDATA_H
#define PERSONDATA_PERSONDATA_H

#include <iostream>
#include <string>

class PersonData {
private:
    std::string lastName, firstName, address, city, state;
    int zip, phone;
    PersonData() {};

public:
    PersonData(std::string ln, std::string fn, std::string a, std::string c, std::string s, int z, int p)
            : lastName(ln), firstName(fn), address(a), city(c), state(s), zip(z), phone(p) { }
    std::string getFullName();
    std::string getAddress();
    std::string getCity();
    std::string getState();
    int getZip();
    int getPhone();

    void setLastName(std::string);
    void setFirstName(std::string);
    void setAddress(std::string);
    void setCity(std::string);
    void setState(std::string);
    void setZip(int);
    void setPhone(int);
};


#endif //PERSONDATA_PERSONDATA_H
