#include <iostream>
#include <string>

using namespace std;

struct Date
{
    string day;
    string month;
    string year;
};

void displayDate(struct Date date) {
    cout << date.day << "-" << date.month << "-" << date.year << endl;
}

int main()
{
    Date date = {"01", "01", "1990"};

    displayDate(date);

    return 0;
}
