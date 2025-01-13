#include "./buyer.hpp"
#include <iostream>

void Fruitbuyer::init_money(int money)
{
    my_money = money;
    num_of_apples = 0;
}

void Fruitbuyer::buy_apples(Fruitseller &seller, int money)
{
    num_of_apples += seller.sale_apples(money);
    my_money -= money;
}

void Fruitbuyer::show_buy_result(void)
{
    cout<<"현재 잔액 : "<<my_money<<endl;
    cout<<"사과 개수 : "<<num_of_apples<<endl;
}