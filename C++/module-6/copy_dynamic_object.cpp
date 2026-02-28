#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int jerseyNumber;
    string country;

    Cricketer(string name,
              int jerseyNumber,
              string country)
    {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->country = country;
    }

    struct INFO // custom return structure
    {
        int jerseyNumber;
        string country;
    };

    INFO getInfo()
    {
        return {jerseyNumber, country};
    }

    Cricketer getCricketer()
    {
        return *this;
    };
};
int main()
{
    Cricketer *shachin = new Cricketer("Sachin Tendulkar", 10, "India");
    Cricketer *dhoni = new Cricketer("Dhoni", 100, "India");
    cout
        << "Name: " << shachin->name << ", Jersey Number: " << shachin->jerseyNumber << ", Country: " << shachin->country << endl;

    *shachin = *dhoni;

    delete dhoni;

    cout
        << "Name: " << shachin->name << ", Jersey Number: " << shachin->jerseyNumber << ", Country: " << shachin->country << endl;

    return 0;
}