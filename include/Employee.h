#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
    public:
        Employee(int id, const std::string& name, const std::string& position);

        int getId() const;
        std::string getName() const;
        std::string getPosition() const;
        void setPosition(const std::string& position);

    private:
        int id;
        std::string name;
        std::string position;
};

#endif