#include<iostream>

using namespace std;

template <class T1= int , class T2= float , class T3= char>

class siddharth{
    public:
        T1 a;
        T2 b;
        T3 c;

        siddharth(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout <<"The value of a is "<<a <<endl;
            cout <<"The value of b is "<<b <<endl;
            cout <<"The value of c is "<<c <<endl;
        }

};

int main(){
    siddharth<>  sidd(5 , 5.5 , 'S');
    sidd.display();

    cout <<endl;

    siddharth <float , int , char > sidhu(9.5, 55, 'R');
    sidhu.display();
    
    return 0;
}