#include <iostream>
#include <string.h>

using namespace std;

struct Book
{
    string title;
    string author;
    int price;
};


int main()
{
    Book book = {"Good Book", "John Doe", 1000};

    return 0;
}
