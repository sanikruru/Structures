#include <iostream>
#include <string.h>
struct kompleksnoe
{
    double vesh_chast;
    double mnimoe;
};
void soprazhennoe (kompleksnoe num1)
{
    std :: string edinica = "i";
    if(num1.mnimoe>0)
    {
        std :: cout << num1.vesh_chast << "- i * " << num1.mnimoe << std :: endl;
    }
    if(num1.mnimoe<0)
    {
        std :: cout << num1.vesh_chast << "+ i * " << num1.mnimoe*(-1) << std :: endl;
    }
    if(num1.mnimoe==0)
    {
        std :: cout << num1.vesh_chast << std :: endl;
    }
}
int main()
{
    kompleksnoe chislo = {13,-8};
    soprazhennoe(chislo);
    return 0;
}
