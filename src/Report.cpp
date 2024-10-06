#include "Report.h"
#include <iostream>

void Report::generateMonthlyReport(const std::vector<Employee>& employees, const Attendance& attendance) {
    std::cout << "Monthly Attendance Report:\n";
    for (const auto& emp : employees) {
        std::cout << "Employee ID: " << emp.getId()
                << ", Name: " << emp.getName()
                << ", Attendance: " << attendance.getAttendance(emp.getId()) << "\n";
    }

}