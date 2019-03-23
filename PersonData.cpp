//
// Created by Giles Pierre Carlos on 2019-03-21.
//

#include "PersonData.h"
#include <iostream>

std::string PersonData::getFullName() { return firstName + " " + lastName; }
std::string PersonData::getAddress() { return address; }
std::string PersonData::getCity() { return city; }
std::string PersonData::getState() { return state; }
int PersonData::getZip() { return zip; }
int PersonData::getPhone() { return phone; }

void PersonData::setLastName(std::string ln) { lastName = ln; }
void PersonData::setFirstName(std::string fn) { firstName = fn; }
void PersonData::setAddress(std::string a) { address = a; }
void PersonData::setCity(std::string c) { city = c; }
void PersonData::setState(std::string s) { state = s; }
void PersonData::setZip(int z) { zip = z; }
void PersonData::setPhone(int p) { phone = p; }