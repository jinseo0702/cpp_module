# ifndef CAR_HPP
# define CAR_HPP

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

#endif