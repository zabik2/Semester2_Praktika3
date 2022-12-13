#include "travel.h"

Travel::Travel()
{

}

long Travel::getTravelID() const
{
    return TravelID;
}

void Travel::setTravelID(long newTravelID)
{
    TravelID = newTravelID;
}

long Travel::getCustomerID() const
{
    return CustomerID;
}

void Travel::setCustomerID(long newCustomerID)
{
    CustomerID = newCustomerID;
}
