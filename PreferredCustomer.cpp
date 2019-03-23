//
// Created by Giles Pierre Carlos on 2019-03-21.
//

#include "PreferredCustomer.h"

double PreferredCustomer::getPurchaseAmount() { return purchaseAmount; }
double PreferredCustomer::getDiscountLevel() { return discountLevel; }

void PreferredCustomer::setPurchaseAmount(double pa) { purchaseAmount = pa; }
void PreferredCustomer::setDiscountLevel(double pa) {
    if (pa > 500 && pa < 1000)
        discountLevel = .05;
    else if (pa > 1000 && pa < 1500)
        discountLevel = .06;
    else if (pa > 1500 && pa < 2000)
        discountLevel = .07;
    else if (pa > 2000)
        discountLevel = .10;
    else
        discountLevel = 0;
}