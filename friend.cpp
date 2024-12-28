#include<iostream>
using namespace std ;
class complex
{
private:
    int a ,  b ;
public:
    void setdata(int c1,int c2){
    a = c1 ;
    b = c2 ;}
    friend complex sum (complex o1 , complex o2);
    void getdata(){
    cout<<" Number is "<< a <<"+"<<b<<"i"<<endl ;}  
};
complex sum (complex o1 , complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3 ;
}


int main (){
    complex A , B , C ;
    A.setdata(1,2);
    A.getdata();
    B.setdata(5,6);
    B.getdata();
    C = sum(A,B);
    return 0;
}