#include<iostream>
using namespace std;
class Ground
{
    int rooms;
    protected:
    void put();
    public:
    void get();
};
class Middle : private Ground
{
    int labs;
    public:
    void take();
    void give();
    
};
class Top: public Middle
{
    int roof;
    public:
    void in();
    void out();

};
/*Q1.Which type of inheritance is this?
Ans1. multilevel inheritance
Q2.Write the names of all the members ,which are directly accessible by member function 
give() of middle class
Ans2. data members : labs
      member functions: take(),give








*/