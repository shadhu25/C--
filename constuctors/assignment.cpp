#include <iostream>
#include <string>
using namespace std;
class mobile
{
private:
    string name;
    int RAM;
    string battery;

public:
     mobile()
    {
        name ="NULL";
        RAM = 0;
        battery = "NULL";
    }
    mobile(string a_name, int a_RAM, string a_battery)
    {
        name = a_name;
        RAM = a_RAM;
        battery = a_battery;
    }
    mobile(mobile &phone2)
    {
        name = phone2.name;
        RAM = phone2.RAM;
        battery = phone2.battery;
    }
    void getmobiledata()
    {
        cout << "name : " << name << endl;
        cout << "RAM : " << RAM << endl;
        cout << "battery : " << battery << endl
             << endl;
    }
};
int main()
{
    mobile phone1, phone2("vivo S1", 4, "4200"), phone3(phone2);
    cout << "phone1 details\n"
         << endl;
    phone1.getmobiledata();
    cout << "phne2 details\n"
         << endl;
    phone2.getmobiledata();
    cout << "phone3(clone) details\n"
         << endl;
    phone3.getmobiledata();
    return 0;
}