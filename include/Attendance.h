#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>
#include <map>
#include "Employee.h"

class Attendance {
    public:
        void markAttendance(const Employee& emp, const std::string& time);
        std::string getAttendance(int employeeId) const;

    private:
        std::map<int, std::string> records;
};


#endif