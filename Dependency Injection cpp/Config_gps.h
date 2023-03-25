#pragma once
#include"Interface_gps.h"
#include"MockTest_GPS.h"
#include"Real_GPS.h"


class Config_gps
{
private:
	//MockTest_GPS m_gps;  //swap here instead in main
	Real_GPS m_gps;
public:
	Interface_gps& m_Get_gps();
};

