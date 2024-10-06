#include "gtest/gtest.h"
#include "Attendance.h"
#include "Employee.h"

TEST(AttendanceTest, MarkAttendance) {
    Employee emp(1, "Test Employee", "Tester");
    Attendance attendance;

    attendance.markAttendance(emp, "10:00 AM");
    EXPECT_EQ(attendance.getAttendance(1), "10:00 AM");
}
