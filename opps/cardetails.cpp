#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int price;

    Car(string brand,string model,int price){
        this->brand=brand;
        this->model=model;
        this->price=price;

    }

    void display(){
        cout<<"brand name : "<<brand<<endl;
        cout<<"model name : "<<model<<endl;
        cout<<"price : "<<price<<endl;
    }
};

int main(){
    Car c1("BMW","BMW-XVW-900",15000000);
    c1.display();


}