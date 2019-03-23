#include <iostream>

#include "PersonData.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"

int main() {
    PersonData Person1("Carlos", "Geraldo", "29 Blackhawk Way", "Pomona", "CA", 91768, 925356890);

    std::cout << "\t\tPersonal Information" << std::endl;
    std::cout << "Name: " << Person1.getFullName() << std::endl;
    std::cout << "Address: " << Person1.getAddress() << std::endl;
    std::cout << "City: " << Person1.getCity() << std::endl;
    std::cout << "State: " << Person1.getState() << std::endl;
    std::cout << "Zip Code: " << Person1.getZip() << std::endl;
    std::cout << "Phone Number: " << Person1.getPhone() << std::endl;

    CustomerData Customer1(45890, true, "Carlos", "Geraldo", "29 Blackhawk Way", "Pomona", "CA", 91768, 925356890);

    std::cout << "\n\t\tCustomer Information" << std::endl;
    std::cout << "Customer Number: " << Customer1.getCustomerNumber() << std::endl;
    std::cout << "Mailing List Member: " << Customer1.onMailingList() << std::endl;

    PreferredCustomer PreferredCustomer1(7450, 45890, true, "Carlos", "Geraldo", "29 Blackhawk Way", "Pomona", "CA", 91768, 925356890);

    std::cout << "\n\t\tPreferred Customer Purchases and Benefits" << std::endl;
    std::cout << "Total Amount Purchased: $" << PreferredCustomer1.getPurchaseAmount() << std::endl;
    std::cout << "Discount level: " << PreferredCustomer1.getDiscountLevel() * 100 << "%" << std::endl;

    return 0;
}