#include <iostream>

struct Hopper
{

};

struct HeatSource
{

};

struct WaterReservoir
{

};

struct Grinder
{

};

struct CupReceptacle
{

};

struct CoffeeMaker : Hopper, HeatSource , WaterReservoir , Grinder , CupReceptacle
{
    void make()
    {

    }
};


int main() 
{
    CoffeeMaker *c = new CoffeeMaker();
    c.make();
}
