//
// Created by Giles Pierre Carlos on 2019-03-21.
//

#ifndef PERSONDATA_CUSTOMERDATA_H
#define PERSONDATA_CUSTOMERDATA_H

#include "PersonData.h"

class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;
public:
    CustomerData(int cn, bool ml, std::string ln, std::string fn, std::string a, std::string c, std::string s, int z, int p)
    : PersonData(ln, fn, a, c, s, z, p) {
        setCustomerNumber(cn);
        setMailingList(ml);
    };

    int getCustomerNumber();
    bool onMailingList();

    void setCustomerNumber(int);
    void setMailingList(bool);
};

#endif //PERSONDATA_CUSTOMERDATA_H
