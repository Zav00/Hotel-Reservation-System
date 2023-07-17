#ifndef HOTEL_RESERVATION_SYSTEM_ROOM_H
#define HOTEL_RESERVATION_SYSTEM_ROOM_H
#include <string>
class Room {

private:
    int roomNumber;
    std::string type;
    std::string status;
public:

    Room(int number, const std::string &roomType)
            : roomNumber(number), type(roomType), status("Available") {}

    int getRoomNumber() const {
        return roomNumber;
    }

    std::string getType() const {
        return type;
    }

    std::string getStatus() const {
        return status;
    }

    void setStatus(const std::string &newStatus) {
        status = newStatus;
    }

};
#endif //HOTEL_RESERVATION_SYSTEM_ROOM_H
