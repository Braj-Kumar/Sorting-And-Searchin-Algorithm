#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    string modal;
    int price;

    // default constructor

    Car(){

    }

    // parametrized constructor
    Car(string n, string m, int p){
        name = n;
        modal = m;
        price =p;
    }
};
void print(Car c){
    cout<<c.name<<" " << c.modal<<" "<<c.price<<endl;
}
void change(Car c){
    c.name = "audi";
}
int main(){
    Car c1;
    c1.name = "maruti";
    c1.price = 700000;
    c1.modal = "7seater";

    Car c2;
    c2.name = "nano";
    c2.price = 500000;
    c2.modal = "2 seat";


    print(c1);
    // print(c2);

    Car c3("honda","8seat",900000);

    Car c4 = c3;  // copy constructor 
    c4.name = "frarai";
    Car c5(c4);

    print(c5);
    print(c4);
    print(c3);

    change(c1); //  pass by value
    print(c1);
    return 0;
}