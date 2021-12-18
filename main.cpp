#include <iostream>


struct Hopper
{
    int n = 1;
    int beans = 200;
    void dropBeans()
    {
        if (beans >= 50)
        {
            std::cout << "There are currently " << beans << "grams of coffee beans in the machine. Now dispensing 50 grams." << std:: endl;
            beans - 50;
        }
        else
        {
            std::cout << "There is not enough coffee beans in the machine. Please restock." << std::endl;
        }
        
    }
};

struct HeatSource
{
    int degrees = 30;
    void heat()
    {
        std::cout << "Water has been added into mixture, Now brewing." << std::endl;
        degrees = 100;
    }

};

struct WaterReservoir
{
    double water = 1;
    void addWater() 
    {
        if (water >= 0.25)
        {
            std::cout << "There are currently " << water << "liters in the machine. Now dispensing 0.25 liters." << std:: endl;
            water - 0.25;
        }
        else
        {
            std::cout << "There is not enough water in the machine. Please restock." << std::endl;
        }
    }
    
        
};

struct Grinder
{
    void grind()
    {
        std::cout << "Beans have been dispensed, now grinding." << std::endl;
        std::cout << "Beans have been grinded. Now adding water." << std::endl;
    }
};

struct CupReceptacle
{
    int cup;
    void pour()
    {
        std::cout << "Water has been heated. Now pouring." << std::endl;
    }
};


struct CoffeeMaker : Hopper, HeatSource , WaterReservoir , Grinder , CupReceptacle
{
    void make(int n)
    {
        if (n > 0 && n<=4)
        {
            for (int x = 0; x > n; x++)
            {
                dropBeans();
                grind();
                addWater();
                heat();
                pour();
                std::cout << "Coffee #" << x << "has been made." << std::endl;
            }
        }
        std::cout << "Enjoy!" << std::endl;
    }
};


int main() 
{
    CoffeeMaker c;
    c.make(3);
}
