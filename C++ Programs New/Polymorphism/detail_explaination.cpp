#include <iostream> // Includes the input-output stream library for using cout and cin.
using namespace std; // Uses the standard namespace to avoid prefixing standard library names with std::.

class A { // Defines a class A.
    protected: // Access specifier allowing members to be accessed in derived classes.
    int a; // Member variable of class A.

    public: // Public access specifier allowing members to be accessed outside the class.
    A() { // Default constructor for class A.
        a = 0; // Initializes a to 0.
    }
    A(int a) { // Parameterized constructor for class A.
        this->a = a; // Initializes a with the passed argument using 'this' pointer.
    }

    void display() // Member function with no arguments.
    {
        cout << "A = " << a << endl; // Prints the value of a.
    }
};

class B : public A { // Defines class B which inherits from class A publicly.
    private: // Private access specifier, members are accessible only within this class.
    int b; // Member variable of class B.

    public: // Public access specifier allowing members to be accessed outside the class.
    B() { // Default constructor for class B.
        b = 0; // Initializes b to 0.
    }
    B(int a, int b) : A(a) { // Parameterized constructor for class B, initializes base class A with a.
        this->b = b; // Initializes b with the passed argument using 'this' pointer.
    }

    void display(int prefix) // Overloaded member function with one argument.
    {
        cout << prefix << " " << a << endl; // Prints the prefix followed by the value of a.
    }
};

int main() { // Main function, entry point of the program.
    B obj4(10, 30); // Creates an object obj4 of class B, initializing it with values 10 and 30.
    obj4.display(12); // Calls the overloaded display function of class B with the argument 12.
    obj4.A::display(); // Calls the display function of the base class A for the object obj4.
}
