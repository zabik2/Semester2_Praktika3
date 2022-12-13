#include "customer.h"

Customer::Customer()
{

}

const std::string &Customer::getName_CustomerClass() const
{
    return Name_CustomerClass;
}

void Customer::setName_CustomerClass(const std::string &newName_CustomerClass)
{
    Name_CustomerClass = newName_CustomerClass;
}

long Customer::getID_CustomerClass() const
{
    return ID_CustomerClass;
}

void Customer::setID_CustomerClass(long newID_CustomerClass)
{
    ID_CustomerClass = newID_CustomerClass;
}

void Customer::pushTravelList(Travel *objectPushed)
{
    TravelList_CustomerClass.push_back(objectPushed);
}
