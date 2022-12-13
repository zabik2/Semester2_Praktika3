#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H

#include "booking.h"
#include "flightbooking.h"
#include "hotelbooking.h"
#include "rentalcarreservation.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include "travel.h"
#include "customer.h"

class TravelAgency
{
public:
    TravelAgency();
    void readFile(std::string FileName);
    void readBinaryFile();
    ~TravelAgency();

    Travel* FindTravel(long IDtoBeFound);
    void FindCustomer(long IDtoBeFound);

    std::vector<FlightBooking*> FlightsList;
    std::vector<HotelBooking*> HotelList;
    std::vector<RentalCarReservation*> RentalCarList;
    std::vector<Booking*> BookingList;
    std::vector<Travel*> TravelList_TravelAgencyClass;
    std::vector<Customer*> CustomerList_TravelAgencyClass;

private:
};

#endif // TRAVELAGENCY_H
