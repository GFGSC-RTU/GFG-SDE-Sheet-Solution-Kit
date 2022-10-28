#include<iostream>
using namespace std;
//Multilevel Inheritance in C++ 
class grandfather
{
  public:
    void house()
    {
        cout<<"3BHK House."<<endl;
    }
};
class father:public grandfather
{
    public:
    void land()
    {
        cout<<"5Arcs of Land."<<endl;
    }
};
class son:public father
{
    public:
    void car()
    {
        cout<<"Audi Car."<<endl;
    }
};
int main()
{
    son o;
    o.house();
    o.land();
    o.car();
    return 0;
}