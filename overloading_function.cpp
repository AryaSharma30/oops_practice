#include<iostream>
using namespace std ;
class Print {
    public :
    void print (int x){
        cout << "The value of x is "<< x << endl ;
    }
    void print (double x){
         cout << "The value of x is "<< x << endl ;
    }
    void print (char x){
         cout << "The value of x is "<< x << endl ;
    }
};
int main()
{
    Print P1 ;
    P1.print(2);
    P1.print(3.14);
    P1.print('&');
    return 0;
}
