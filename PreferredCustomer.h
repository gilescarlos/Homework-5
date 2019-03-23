//
// Created by Giles Pierre Carlos on 2019-03-21.
//

#ifndef PERSONDATA_PREFERREDCUSTOMER_H
#define PERSONDATA_PREFERREDCUSTOMER_H

#include "CustomerData.h"

class PreferredCustomer : public CustomerData {
private:
    double purchaseAmount, discountLevel;

public:
    PreferredCustomer(double pa, int cn, bool ml, std::string ln, std::string fn, std::string a, std::string c, std::string s, int z, int p)
            : CustomerData(cn, ml, ln, fn, a, c, s, z, p) {
        setPurchaseAmount(pa);
        setDiscountLevel(pa);
    };

    double getPurchaseAmount();
    double getDiscountLevel();

    void setPurchaseAmount(double);
    void setDiscountLevel(double);
};


#endif //PERSONDATA_PREFERREDCUSTOMER_H
