#include "Employee.h"
#include "Attendance.h"
#include "Report.h"
#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>
#include <sstream>

std::string getCurrentTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = 
    std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_time), "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

int main(int argc, char const *argv[])
{
    std::vector<Employee> employees;
    Attendance attendance;

    std::string name, position;
    int empId = 1;

    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        std::cout << "Masukkan nama karyawan: ";
        std::getline(std::cin, name);
        std::cout << "Masukkan posisi karyawan: ";
        std::getline(std::cin, position);

        Employee newEmployee(empId, name, position);
        employees.push_back(newEmployee);

        std::string currentTime = getCurrentTime();
        attendance.markAttendance(newEmployee, currentTime);

        std::cout << "Absensi untuk " << name << " berhasil di catat pada " << currentTime << "\n";

        std::cout << "Apakah anda ingin menambah absensi? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();

        empId++;
    }

    Report report;
    report.generateMonthlyReport(employees, attendance);

    return 0;
}
