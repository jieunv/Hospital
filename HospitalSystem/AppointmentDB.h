#pragma once
#include <mysql/jdbc.h>
#include <vector>
#include "AppointmentDto.h"
class AppointmentDB
{
private:
	sql::Connection *con;
	sql::Statement* stmt;
public:
	AppointmentDB();
	~AppointmentDB();
	std::vector<AppointmentDto>todayAppointment(std::string doctorId);
	bool Connect();
	bool addAppointment(
		std::string patientPhone, std::string appointDate, 
		std::string time, std::string doctorId,std::string sympton);


};

