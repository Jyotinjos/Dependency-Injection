/*
Simple demonstration of Dependecy Injection.
    -There is an Interface class that behaves like a contract, used for interaction between classes
    -There is Real_gps class that fetches longitutude abd latuitude from sensors, real world scenario
    -ANd we have Mock_test_gps class to test in simulation world.
    -imagine we have to use methods in many places, and changing the code according to real world and simultion world must be avoided.
    -Interface_gps class with do decide the what class to be called accordng to the need
    - WE CAN ONLY CREATE POINTERS OR REFERENCES FOR "iNTERFACE CLASS"

    -Config class will make choices for Interface class
    -config class has a Getter method that returns reference of Interface object for Mock/Real_gps private object

*/

#include <iostream>
#include"Interface_gps.h"
#include"Config_gps.h"

std::pair<float, float> DriveRobot(Interface_gps& I_gps)
{
    float d_lati = I_gps.m_getLatitude();
    float d_long = I_gps.m_getLongitude();
    return std::make_pair(d_lati, d_long);
}

int main()
{
    Config_gps gps;
    std::cout << "LATITUDE: " << DriveRobot(gps.m_Get_gps()).first << " & " << DriveRobot(gps.m_Get_gps()).second << std::endl;

    return 0;
}

