//
// Created by Giles Pierre Carlos on 2019-03-21.
//

#include "CustomerData.h"

int CustomerData::getCustomerNumber() { return customerNumber; }
bool CustomerData::onMailingList() { return mailingList; }

void CustomerData::setCustomerNumber(int cn) { customerNumber = cn; }
void CustomerData::setMailingList(bool answer) { mailingList = answer; }