#include "Attendance.h"


void Attendance::markAttendance(const Employee& emp, const std::string& time) {
    records[emp.getId()] = time;
}
std::string Attendance::getAttendance(int employeeId) const {
    if (records.find(employeeId) != records.end()) {
        return records.at(employeeId);
    }
    return "No record found";
}