#include <iostream>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};
void minutes (Time m)
{
    std :: cout << m.minutes << std :: endl;
}
int main()
{
    Time time;
    time = {3,15,43};
    minutes (time);
    return 0;
}
