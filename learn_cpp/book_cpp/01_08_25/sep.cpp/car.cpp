#include "./center.hpp"

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