#include "./seller.hpp"
#include <iostream>

void Fruitseller::initmember(int price, int num, int money)
{
    Apple_price = price;
    num_of_aplle = num;
    my_money = money;
}

int Fruitseller::sale_apples(int money)
{
    int num = money / Apple_price;
    num_of_aplle -= num;
    my_money += money;
    return (num);
}

void Fruitseller::show_sale_result(void)
{
    cout<<"남은 사과 : "<<num_of_aplle<<endl;
    cout<<"판매 수익 : "<<my_money<<endl;
}
