#include<iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int width;
    int areacalulation(){
        int area=0;
        area = length * width;
        return area;
    }

};

int main(){
    Rectangle r1;
    r1.length=44;
    r1.width=28;
    cout<<"Area : "<<r1.areacalulation();
    return 0;
}