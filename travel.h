#ifndef TRAVEL_H
#define TRAVEL_H

#include "booking.h"

class Travel
{
public:
    Travel();
    void addBooking(); //Booking :: Booking*

    long getTravelID() const;
    void setTravelID(long newTravelID);

    long getCustomerID() const;
    void setCustomerID(long newCustomerID);

    std::vector<Booking*> BookingList_TravelClass;

private:
    int TravelID;
    long CustomerID;

};

#endif // TRAVEL_H
