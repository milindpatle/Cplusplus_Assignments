#include <iostream>
using namespace std;

class Airport
{
private:
    int Flight;
    string Destination;
    float Distance;
    float Fuel;

    float CALFUEL()
    {
        if (Distance <= 1000)
        {
            Fuel = 500;
        }
        else if (Distance > 1000 && Distance <= 2000)
        {
            Fuel = 1100;
        }
        else if(Distance>2000)
        {
            Fuel = 2200;
        }
        return Fuel;
    }

    public:

    void FEEDINFO()
    {
        cout << "Enter the Flite value :" << endl;
        cin >> Flight;
        cout << "Enter the Destination : " << endl;
        cin >> Destination;
        cout << "Enter the Distance :" << endl;
        cin >> Distance;
        // cout << "Enter the Fuel : " << endl;
        // cin >> Fuel;
    }
    void SHOWINFO()
    {
        cout << "FLITE NUMBER : " << Flight << endl;
        cout << "Destination : " << Destination << endl;
        cout << "Distance : " << Distance << endl;
        cout << "Fuel : " << CALFUEL() << endl;
    }
};
int main()
{
    Airport a;
    a.FEEDINFO();
    a.SHOWINFO();
}