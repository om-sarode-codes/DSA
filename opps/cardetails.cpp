#include<iostream>
using namespace std;

class Car{
public:
    string brand;
    string model;
    int price;

    void showDetails(){
        cout<<"Brand name : "<<brand<<endl;
        cout<<"Model name : "<<model<<endl;
        cout<<"car price : "<<price<<endl;
    }
};

int main(){
    Car c1;
    c1.brand="BMW";
    c1.model="BMW X6 M60i";
    c1.price=17000000;
    c1.showDetails();
    return 0;
}