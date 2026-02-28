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

    Cricketer player("Sachin Tendulkar", 10, "India");
    Cricketer::INFO info = player.getInfo();
    cout << "Name: " << info.jerseyNumber << ", Jersey Number: " << info.jerseyNumber << ", Country: " << info.country << endl;

    Cricketer cricketer = player.getCricketer();
    cout << "Name: " << cricketer.name << ", Jersey Number: " << cricketer.jerseyNumber << ", Country: " << cricketer.country << endl;

    return 0;
}