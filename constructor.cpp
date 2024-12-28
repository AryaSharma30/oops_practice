// #include<iostream>
// using namespace std ;
// class complex {
//     int a , b ;
//     public :
//     void printnum(){
//         cout<<" the number is "<<a<<"+"<<b<<"i"<<endl;
//     };
//     complex(int x , int y) ;
// };
// complex :: complex(int x , int y){
//     a = x ;
//     b = y ;

// }
// int main (){
//   complex c1 (11 , 12);
//   c1.printnum();
//    complex c2 (12 , 13) ;
//   c2.printnum();
//   return 0 ;
// }

#include<iostream>
using namespace std ;
class subject {
    public : 
    string name ;
    double duration ;
    string college ;
    void getinfo (){
        cout << "subject name is  " << name << "    college name is  " << college << "    time duration is  " << duration << endl ; 
    }
    subject ( string n , string c , double c1){
        name = n ;
        college = c ;
        duration = c1 ;
    }
};
    int main() {
     subject A ("Maths","amity",4) ;
     A.getinfo ();
        return 0;
    }
    