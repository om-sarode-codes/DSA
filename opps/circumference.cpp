#include <iostream>
using namespace std;
class Circle
{
 public:   
    int radius;
    float areacalulate()
    {
        float area = 0;
        area = 3.14 * radius * radius;
        return area;

    }
    float circumferenccalulate()
    {
        float circumferenc = 0;
        circumferenc = 2 * 3.14 * radius;
        return circumferenc;
    }
};

int main(){
    Circle c1;
    c1.radius=15;
   cout<<"Area : "<<c1.areacalulate()<<endl;
   cout<<"circumferenc : "<<c1.circumferenccalulate()<<endl;
   return 0;
}