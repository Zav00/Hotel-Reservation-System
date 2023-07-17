#ifndef HOTEL_RESERVATION_SYSTEM_RESERVATION_H
#define HOTEL_RESERVATION_SYSTEM_RESERVATION_H
#include "Customer.h"
#include "Room.h"
class Reservation {
public:
    Room room;
    Customer customer;

    Reservation(const Room &reservedRoom, const Customer &reservingCustomer)
            : room(reservedRoom), customer(reservingCustomer) {}
};

#endif //HOTEL_RESERVATION_SYSTEM_RESERVATION_H
