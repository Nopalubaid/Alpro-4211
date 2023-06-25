#include <iostream>

using namespace std;

enum Air { Aqua = 100, Le_Mineral = 60, Club = 30, Wilis = 50 };

int main()
{
    Air y = Air::Aqua;
    cout << y << endl;
    return 0;
}
