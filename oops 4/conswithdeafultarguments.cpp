#include<iostream>

using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

        public:
        Simple(int a , int b = 7, int c =9){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData();
};
void Simple::printData(){
    cout <<"The value of data1, data2 and data3 is "<<data1<< ","<<data2<<" and "<<data3<<endl;
}

int main(){
    Simple s1(3, 8);
    s1.printData();

    

    return 0;
}