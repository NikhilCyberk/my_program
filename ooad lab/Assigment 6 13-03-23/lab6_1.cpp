/*

1) Implement the following class hierarchy by defining all functions of each class.
    Demonstrate the call of each function and access to each data member using an
    object of derived class.

    Class : Bicycle
    Members: frametype, wheeldiameter, handletype
    Functions: getData(), printData()
ṇ
    Class : MotorBike (inherits Bicycle)
    Members :noofGears, maxspeed, enginecapacity, meterreading,
    fuelconsumed
    Functions: inputData(), printData(), calmilage()

*/
#include <bits/stdc++.h>
using namespace std;

class Bicycle
{
    char frameType, handleType;
    float wheelDiameter;

public:
    Bicycle() {}
    void getData(char ft, char ht, float wd)
    {
        frameType = ft;
        handleType = ht;
        wheelDiameter = wd;
    }
    void printData()
    {
        cout << "Frame Type : " << frameType << "\nHandle Type : " << handleType << "\nWheel Diameter : " << wheelDiameter << " ft." << endl;
    }
};

class MotorBike : public Bicycle
{
    int noOfGears, maxSpeed, engineCapacity;
    float fuelConsumption, meterReading;

public:
    void inputData(int nog, int ms, int ec, float mr, float fc)
    {
        noOfGears = nog;
        maxSpeed = ms;
        engineCapacity = ec;
        fuelConsumption = fc;
        meterReading = mr;
    }
    void printData()
    {
        Bicycle::printData();
        cout << "Number of Gears : " << noOfGears << "\nMax Speed : " << maxSpeed << " km/hr\nEngine Capacity : " << engineCapacity << "cc\nMeter Reading (distance covered) :" << meterReading << "km\nFuel Consumption : " << fuelConsumption << " ltr." << endl;
    }
    float calMilage()
    {
        return (meterReading / fuelConsumption);
    }
};

int main()
{
    MotorBike m;
    m.getData('A', 'H', 2);
    m.inputData(4, 350, 250, 50, 2);
    m.printData();
    float milage = m.calMilage();
    cout << "\nMilage of Motor Bike : " << milage << " km/L\n";
    return 0;
}
