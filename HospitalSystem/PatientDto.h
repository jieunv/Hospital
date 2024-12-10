#pragma once
#include <string>
class PatientDto
{
public:
	std::string residentNumber;
	std::string name;
	std::string phone;
	std::string gender;
	std::string address;
	int emergencyNumber;
	std::string dosingList;
	std::string bloodType;
	PatientDto::PatientDto() {}
};
