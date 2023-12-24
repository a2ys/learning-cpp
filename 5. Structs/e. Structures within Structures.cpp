#include <iostream>
#include <string>

using namespace std;

struct Department
{
    string name;
    string location;
};

struct College {
    string name;
    Department department;
    int yearEstablished;
};

int main()
{
    return 0;
}
