#include <iostream>

int main()
{
    int x = 10;
    char c[] = "Hello World";
    double d = 11.4;
    bool b = true;
    std::cout << x << '\n'      // we can print new line by "\n" or
              << c << std::endl // using std::endl (end of line)
              << b << '\n'
              << d << std::endl;

    return 0;
}