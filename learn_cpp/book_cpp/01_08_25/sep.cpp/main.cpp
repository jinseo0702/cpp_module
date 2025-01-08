#include "./center.hpp"

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