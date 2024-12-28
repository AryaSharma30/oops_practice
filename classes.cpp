#include<iostream>
using namespace std ;
class CAR {
    public:
    string car;
    int price ;
};
int main (){
    CAR MyCar ;                        // Object creation
    MyCar.car = "THAR";
    MyCar.price = 1600000;
    cout<<MyCar.car<<endl;
    cout<<" Price : "<<MyCar.price<<endl;
    return 0 ;
};