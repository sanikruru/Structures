#include<iostream>
struct Range
{
    double min;
    double max;
};
struct Sensor
{
    Range range;
    double error;
    double vmax;
};
void sravnenie_datchikov (Sensor datchik1,Sensor datchik2)
{
    if((datchik1.range.max - datchik1.range.min) > (datchik2.range.max - datchik2.range.min))
    {
        std :: cout << "It's datchik1"
                    << std :: endl
                    << "Range: "
                    << datchik1.range.min
                    << "  "
                    << datchik1.range.max
                    << std :: endl
                    << "Error: "
                    << datchik1.error
                    << std :: endl
                    << "Vmax: "
                    << datchik1.vmax
                    << std ::endl;
    }
    if((datchik2.range.max - datchik2.range.min) > (datchik1.range.max - datchik1.range.min))
    {
        std :: cout << "It's datchik2"
                    << std :: endl
                    << "Range: "
                    << datchik2.range.min
                    << "  "
                    << datchik2.range.max
                    << std :: endl
                    << "Error: "
                    << datchik2.error
                    << std :: endl
                    << "Vmax: "
                    << datchik2.vmax
                    << std ::endl;
    }
}
int main ()
{
    Sensor datchik1 = {0,12,2,100};
    Sensor datchik2 = {-1,17,4,85};
    sravnenie_datchikov(datchik1,datchik2);
    return 0;
}
