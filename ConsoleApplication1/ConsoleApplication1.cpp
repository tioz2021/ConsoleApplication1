#include <iostream>

class Person {
public:
    // Constructor
    Person(std::string name, int age) {
        m_name = name;
        m_age = age;
    }

    // Member function
    void say_hello() {
        std::cout << "Hello, my name is " << m_name << " and I am " << m_age << " years old." << std::endl;
    }

private:
    std::string m_name;
    int m_age;
};

int main() {
    // Create an instance of the Person class
    Person john("Jenya", 25);

    // Call the "say_hello" function on the Person object
    john.say_hello();

    return 0;
}
