#include <iostream>

using namespace std;

struct s_coord
{
    int xpos;
    int ypos;
    
    void movepos(int x, int y)
    {
        xpos += x;
        ypos += y;
    }

    void addpoint(const s_coord &pos)
    {
        xpos += pos.xpos;
        ypos += pos.ypos;
    }

    void showposition(void)
    {
        cout<<"["<<xpos<<" ,"<<ypos<<"]"<<endl;
    }
};

int main(void)
{
    s_coord pos1 = {12, 4};
    s_coord pos2 = {20, 30};

    pos1.movepos(-7, 10);
    pos1.showposition();

    pos1.addpoint(pos2);
    pos1.showposition();

    return (0);
}
