#include <iostream>
using namespace std;

class ParkingSystem
{
    //// 1 /// 2 //// 3
    int big, medium, small;

public:
    ParkingSystem(int bg, int md, int sm)
    {
        big = bg;
        medium = md;
        small = sm;
    }

    bool addCar(int carType)
    {
        switch (carType)
        {
        case 1:
            return big > 0 && big--;
            break;

        case 2:
            return medium > 0 && medium--;
            break;

        case 3:
            return small > 0 && small--;
            break;
        default:
            break;
        }
        return false;
    }
};

int main()
{

    ParkingSystem parkingSystem = ParkingSystem(1, 1, 0);
    cout << parkingSystem.addCar(1) << endl; // return true because there is 1 available slot for a big car
    cout << parkingSystem.addCar(2) << endl; // return true because there is 1 available slot for a medium car
    cout << parkingSystem.addCar(3) << endl; // return false because there is no available slot for a small car
    cout << parkingSystem.addCar(1) << endl; // return false because there is no available slot for a big car. It is already occupied.
}