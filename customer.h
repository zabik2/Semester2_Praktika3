#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "travel.h"

class Customer
{
public:
    Customer();
    void addTravel (); //travel : Travel*
    const std::string &getName_CustomerClass() const;
    void setName_CustomerClass(const std::string &newName_CustomerClass);

    long getID_CustomerClass() const;
    void setID_CustomerClass(long newID_CustomerClass);

    void pushTravelList(Travel *objectPushed);

    std::vector<Travel*> TravelList_CustomerClass;


private:
    long ID_CustomerClass;
    std::string Name_CustomerClass;


};

#endif // CUSTOMER_H
