#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int rollNumber;
    double marks;
    string grades[3];
};

int main()
{
    Student student1 = {"John Doe", 1, 100.0, {"A", "A", "A"}};
    Student student2 = {"Alice Smith", 2, 95.5, {"A", "B", "A"}};
    Student student3 = {"Bob Johnson", 3, 89.0, {"B", "B", "C"}};
    Student student4 = {"Eva Williams", 4, 78.5, {"C", "C", "D"}};
    Student student5 = {"Michael Brown", 5, 92.3, {"A", "A", "B"}};

    return 0;
}
