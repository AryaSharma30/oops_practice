#include<iostream>
using namespace std ;
class Complex {
    int real , imaginary ;
    public :
    Complex (int r , int i){
     real = r ;
     imaginary = i ;
    };
    Complex (){
    };
Complex operator + (Complex const &obj){
    Complex res ;
    res.real = real + obj.real ;
    res.imaginary = imaginary + obj.imaginary ;
    return res ;
};
void display() {
    cout << real << " +i " << imaginary << endl ;
}
};
int main()
{
    Complex c1 (11 , 12);
    Complex c2 (13 , 14);
    Complex c3 = c1 + c2 ;
    c3.display ();
    return 0;
}

 