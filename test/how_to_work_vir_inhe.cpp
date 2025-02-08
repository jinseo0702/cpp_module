#include <bits/stdc++.h>

using namespace std;

class animal
{
protected:
    int age;
public:
    void cg_age(){cout<<age<<"\n";};
    animal(int age) : age(age){};
    ~animal(){};
};

class dog : virtual public animal
{
private:
    /* data */
public:
    dog(int age) : animal(age) {};
    ~dog(){};
};

class cat : virtual public animal
{
private:
    /* data */
public:
    cat(int age) : animal(age) {};
    ~cat(){};
};

int main(void)
{
    animal z(100);
    dog a(12);
    cat b(14);
    z.cg_age();
    a.cg_age();
    b.cg_age();
}

// class dog : public animal
// {
// private:
//     /* data */
// public:
//     dog(int age) : animal(age) {};
//     ~dog(){};
// };

// class cat : public animal
// {
// private:
//     /* data */
// public:
//     cat(int age) : animal(age) {};
//     ~cat(){};
// };
