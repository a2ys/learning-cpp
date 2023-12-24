#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int rollNumber;
    double marks;
};

int main()
{
    Student student1 = {"John Doe", 1, 100.0};
    Student student2 = {"Alice Smith", 2, 95.5};
    Student student3 = {"Bob Johnson", 3, 89.0};
    Student student4 = {"Eva Williams", 4, 78.5};
    Student student5 = {"Michael Brown", 5, 92.3};

    Student students[] = {student1, student2, student3, student4, student5};

    return 0;
}
