#include <iostream>
#include <string.h>

struct Robot_auto
{
    double skorost;
    double vremya_dvizheniya;
    std :: string nomer;
};
void func(Robot_auto tesla)
{
    std :: cout << tesla.skorost*tesla.vremya_dvizheniya << std :: endl;
}
int main()
{
    Robot_auto tesla = {70,3,"a307cc 82rus"};
    func(tesla);
}
