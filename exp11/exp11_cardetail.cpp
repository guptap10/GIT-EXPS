 //PRAKHAR GUPTA
 //23070123101
#include<iostream>
using namespace std;
class Car{
    public:
    string make = "Kia";
    string model = "Seltos";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;

}