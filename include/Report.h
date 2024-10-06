#ifndef REPORT_H
#define REPORT_H

#include <vector>
#include "Employee.h"
#include "Attendance.h"

class Report {
    public:
        void generateMonthlyReport(const std::vector<Employee>& employees, const Attendance& attendance);
};

#endif