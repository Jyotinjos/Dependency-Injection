#pragma once
#include"Interface_gps.h"

class MockTest_GPS : public Interface_gps
{
	// Inherited via Interface_gps
	virtual float m_getLatitude() override;
	virtual float m_getLongitude() override;
};

