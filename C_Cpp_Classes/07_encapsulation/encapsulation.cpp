#include <iostream>
#include <string>

/* C++ Encapsulation
======================

The meaning of Encapsulation, is to make sure that
"sensitive" data is hidden from users.
To achieve this, you must declare class variables or
attributes as 'private' (cannot be accessed from
outside the class).

If you want others to read or modify the value of a
private member, you can provide public 'get' and 'set'
methods.

Access Private Members
-----------------------
To access a private attribute, use public "get" and
"set" methods */

class Employee
{
private:
    // Private attribute
    int salary;
    std::string address;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    void setAddress(std::string a)
    {
        address = a;
    }

    // Getter
    int getSalary()
    {
        return salary;
    }

    std::string getAddress()
    {
        return address;
    }
};

int main(int argc, char const *argv[])

{
    Employee employee_0;
    employee_0.setSalary(50000);
    std::cout << employee_0.getSalary() << std::endl;

    employee_0.setAddress("20 Rue des Champs, Combs la ville 77380, France");
    std::cout << employee_0.getAddress() << std::endl;
    return 0;
}

/*

The salary attribute is private, which have restricted access.

The public setSalary() method takes a parameter (s) and assigns
it to the salary attribute (salary = s).

The public getSalary() method returns the value of the private
salary attribute.

Inside main(), we create an object of the Employee class.

Now we can use the setSalary() method to set the value of the
private attribute to 50000. Then we call the getSalary() method
on the object to return the value.

Why Encapsulation?
------------------

> It is considered good practice to declare your class attributes
as private (as often as you can). Encapsulation ensures better
control of your data, because you (or others) can change one part
of the code without affecting other parts

> Increased security of data  */
