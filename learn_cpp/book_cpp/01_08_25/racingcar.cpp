#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car
{
    char gamerID[ID_LEN];
    int fuelGauege;
    int curSpeed;
};

void showcarstate(const Car &car)
{
    cout<<"소유자 ID: "<<car.gamerID;
}

int main(void)
{
    return (0);
}