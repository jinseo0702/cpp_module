#include "./buyer.hpp"
#include "./seller.hpp"
#include <iostream>

int main(void)
{
    Fruitseller seller;
    Fruitbuyer buyer;

    seller.initmember(1000, 20, 0);
    buyer.init_money(10000);
    buyer.buy_apples(seller, 5000);

    std::cout<<"현재 판매자 과일 현황"<<endl;
    seller.show_sale_result();
    std::cout<<"현재 구매자 과일 현황"<<endl;
    buyer.show_buy_result();

    return (0);
}