#ifndef BUYER_HPP
#define BUYER_HPP

#include "./seller.hpp"

class Fruitbuyer
{
    private :
        int my_money;
        int num_of_apples;
    public :
        void init_money(int money);
        void buy_apples(Fruitseller &seller, int money);
        void show_buy_result(void);
};

#endif