#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
    string gender;
};

int main()
{
    Person *person = new Person;

    // When using a pointer to a Person struct, you need to use the
    // arrow operator (->) instead of the dot operator (.) to access members.

    // ptrPerson->name is equivalent to (*ptrPerson).name.
    // The -> operator simplifies the syntax when working with pointers to structures or classes.

    cout << "Enter the name of the person: ";
    cin >> (*person).name; // Using the dot (.) operator.
    
    cout << "Enter the age of the person: ";
    cin >> person->age; // Using the arrow (->) operator.
    
    cout << "Enter the gender of the person: ";
    cin >> person->gender;

    cout << "Person Information:" << endl;
    cout << "Name: " << (*person).name << endl;
    cout << "Age: " << person->age << endl;
    cout << "Gender: " << person->gender << endl;

    delete person;

    return 0;
}
