#include<iostream>
using namespace std;
class Base{
    public : 
    void getinfo (){
        cout << "base class"<<"\n";
    }
};
    class Derived : public Base {
        public : 
    void getinfo (){
        cout << "derived class"<<"\n";
    }
    };
    int main()
    {
        Derived c1 ;
        c1.getinfo();
        Base c2 ;
        c2.getinfo();
        return 0;
    }
    
