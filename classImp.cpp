#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name) : name(name) {}

    std::string get_name() const {
        return name;
    }

private:
    std::string name;
};

class Employee : public Person {
public:
    Employee(const std::string& name, double salary) : Person(name), salary(salary) {}

    double get_salary() const {
        return salary;
    }

private:
    double salary;
};

class Manager : public Employee {
public:
    Manager(const std::string& name, double salary) : Employee(name, salary) {}
};

class Worker : public Employee {
public:
    Worker(const std::string& name, double salary, Manager* manager = nullptr)
        : Employee(name, salary), manager(manager) {}

    Manager* get_manager() const {
        return manager;
    }

private:
    Manager* manager;
};

class Programmer : public Worker {
public:
    Programmer(const std::string& name, double salary, Manager* manager = nullptr)
        : Worker(name, salary, manager) {}

    void code() const {
        std::cout << get_name() << " is coding." << std::endl;
    }
};

class Tester : public Worker {
public:
    Tester(const std::string& name, double salary, Manager* manager = nullptr)
        : Worker(name, salary, manager) {}

    void test() const {
        std::cout << get_name() << " is testing." << std::endl;
    }
};

int main() {
    // Test the hierarchy
    Manager manager1("Mat Manager", 4000);
    Programmer programmer1("Julia Programmer", 3000, &manager1);
    Tester tester1("Adam Tester", 200, &manager1);

    std::cout << programmer1.get_name() << " is an employee with salary $" << programmer1.get_salary() << "." << std::endl;
    programmer1.code();

    std::cout << tester1.get_name() << " is an employee with salary $" << tester1.get_salary() << "." << std::endl;
    tester1.test();

    std::cout << manager1.get_name() << " is a manager with salary $" << manager1.get_salary() << "." << std::endl;

    // Accessing the manager from a worker
    Manager* manager_of_programmer1 = programmer1.get_manager();
    std::cout << "The manager of " << programmer1.get_name() << " is " << manager_of_programmer1->get_name() << "." << std::endl;

    return 0;
}
