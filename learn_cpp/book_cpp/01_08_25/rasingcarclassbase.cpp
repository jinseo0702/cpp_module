#include <iostream>
#include <cstring>
using namespace std;

namespace car_const
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class car
{
    private :
        char gamerid[car_const::ID_LEN];
        int fuelgauge;
        int curspeed;
    public :
        void initmember(const char * id, int fuel);
        void showcarstate(void);
        void accel(void);
        void Break(void);
};

void car::initmember(const char *id, int fuel)
{
    strcpy(gamerid, id);
    fuelgauge = fuel;
    curspeed = 0;
}

void car::showcarstate(void)
{
    cout<<"소유자 ID : "<<gamerid<<endl;
    cout<<"연료량 : "<<fuelgauge<<"%"<<endl;
    cout<<"현재속도 : "<<curspeed<<"km/s"<<endl<<endl;
}

void car::accel(void)
{
    if (fuelgauge <= 0)
        return ;
    else
        fuelgauge -= car_const::FUEL_STEP;
    if ((curspeed + car_const::ACC_STEP) >= car_const::MAX_SPD)
    {
        curspeed = car_const::MAX_SPD;
        return ;
    }
    curspeed += car_const::ACC_STEP;
}

void car::Break(void)
{
    if (curspeed < car_const::BRK_STEP)
    {
        curspeed = 0;
        return ;
    }
    curspeed -= car_const::BRK_STEP;
    
}

int main(void)
{
    car run99;
    run99.initmember("run99", 100);
    run99.accel();
    run99.accel();
    run99.accel();
    run99.showcarstate();
    run99.Break();
    run99.showcarstate();
    return (0);
}