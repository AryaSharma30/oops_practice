// #include<iostream>
// using namespace std ;
// class Arya {
//     private: int a ,  b , v;
//     public: int d, e;
//     void setdata (int a ,int b, int v);
//     void getdata (){
//     cout<<"The vlaue of a is" << a <<endl;
//     cout<<"The vlaue of b is" << b<<endl;
//     cout<<"The vlaue of v is" << v<<endl;
//     }
// };
//     void Arya :: setdata(int a1 , int b1 , int v1 ){
//         a = a1 ;
//         b = b1 ;
//         v = v1 ;
//     }
// int main (){
//     Arya arya;
//     arya.setdata(7,8,9);
//     arya.getdata();
//     return 0 ;
// }

#include<iostream>
using namespace std ;
class teacher {
    double salary;
    public : 
    string name ;
    string subject ;
    void setinfo (double s){
        salary = s;
    }
    double getinfo (){
        return salary ;
    }
};
int main()
{
    teacher t1 ;
    t1.name = "Arya";
    t1.subject = "Maths";
    t1.setinfo(25000);
    cout << "The name is " << t1.name <<"\n";
    cout << "The subject is " << t1.subject << "\n";
    cout << "The salary is "<< t1.getinfo() << "\n";
    return 0;
}