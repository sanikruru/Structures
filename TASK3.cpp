#include<iostream>
struct Robot
{
    double gabarit;
    double mass;
    double vmax;
};
void minrobot ( Robot robo1,Robot robo2)
{
    if(robo1.gabarit<robo2.gabarit)
    {
        std :: cout << "It's robo1"
                    << std :: endl
                    << robo1.gabarit
                    << std :: endl
                    << robo1.mass
                    << std :: endl
                    << robo1.vmax
                    <<std :: endl;
    }
    if(robo2.gabarit<robo1.gabarit)
    {
        std :: cout << "It's robo2"
                    << std :: endl
                    << robo2.gabarit
                    << std :: endl
                    << robo2.mass
                    << std :: endl
                    << robo2.vmax
                    <<std :: endl;
    }
}
int main()
{
    Robot robo1 = {15.4,23,40};
    Robot robo2 = {10.1,45,25};
    minrobot(robo1,robo2);
    return 0;
}
