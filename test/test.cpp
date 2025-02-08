#include <bits/stdc++.h>


using namespace std;

class animal
{
protected:
    int age;
    static const int fds;
    static const int fds2;
public:
    void cg_age(){cout<<age<<"\n";};
    void show_add(){
        cout<<"animal address is : "<<reinterpret_cast<uintptr_t>(this)<<"\n";
        cout<<"age address is :    "<<reinterpret_cast<uintptr_t>(&age)<<"\n";
        cout<<"ani sta address is: "<<reinterpret_cast<uintptr_t>(&fds)<<"\n";
        cout<<"ani sta address is: "<<reinterpret_cast<uintptr_t>(&fds2)<<"\n";
        cout<<"age size is :       "<<sizeof(animal)<<"\n";
        cout<<"ani fds2 value is:  "<<fds2<<"\n";
    };
    animal(int age) : age(age){};
    ~animal(){};
};

class dog : public animal
{
private:
    int hello;
public:
    dog(int age) : animal(age) {};
    ~dog(){};
    void show_add(){
        animal::show_add();
        cout<<"Dog address is :    "<<reinterpret_cast<uintptr_t>(this)<<"\n";
        cout<<"Dog age address is: "<<reinterpret_cast<uintptr_t>(&age)<<"\n";
        cout<<"Dog sta address is: "<<reinterpret_cast<uintptr_t>(&fds)<<"\n";
        cout<<"Dog size is :       "<<sizeof(dog)<<"\n";
        cout<<"ani fds2 value is:  "<<fds2<<"\n";
    };
};
const int animal::fds = 1;
const int animal::fds2 = 1;


class cat : public animal
{
private:
    /* data */
public:
    cat(int age) : animal(age) {};
    ~cat(){};
    void show_add(){
        animal::show_add();
        cout<<"Cat address is :    "<<reinterpret_cast<uintptr_t>(this)<<"\n";
        cout<<"Cat age address is: "<<reinterpret_cast<uintptr_t>(&age)<<"\n";
        cout<<"cat sta address is: "<<reinterpret_cast<uintptr_t>(&fds)<<"\n";
        cout<<"Cat size is :       "<<sizeof(cat)<<"\n";
    };
};

int main(void)
{
    animal z(100);
    dog a(12);
    cat b(14);
    z.show_add();
    a.show_add();
    b.show_add();
    while (true)
    {
    };
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