#include "Employee.h"


Employee::Employee(int id, const std::string& name, const std::string& position) : id(id), name(name), position(position) {}

int Employee::getId() const {
    return id;
}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const std::string& position) {
    this->position = position;
}
