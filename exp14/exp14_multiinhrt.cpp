
//PRAKHAR GUPTA
//23070123101
#include <iostream>
using namespace std;

class Engine {
    public :


    void start(){
        cout<< "Engine starts"<<endl;
        

    }
};
class Transmission{
    public:
   void shiftGear(){
    cout<<"Transmission shifts gear"<<endl;
   }
   };

    class Car : public Engine, public Transmission {
        public:
        void drive(){
            cout<<"Car is driving"<<endl;
        }
    };

int main()

{
    Car d;
    d.shiftGear();
    d.drive();
    return 0;
}