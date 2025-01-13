#ifndef SELLER_HPP
# define SELLER_HPP

using namespace std;

class Fruitseller
{
    private :
        int Apple_price;
        int num_of_aplle;
        int my_money;
    public :
        void initmember(int price, int num, int money);
        int sale_apples(int money);
        void show_sale_result(void);
};

#endif