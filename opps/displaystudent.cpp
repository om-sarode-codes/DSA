#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int age;
    int rollno;

    void display(){
        cout<<"Student Name : "<<name<<endl;
        cout<<"Student Age : "<<age<<endl;
        cout<<"student ROll_no : "<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.name="om sarode";
    s1.age=19;
    s1.rollno=1556;
    s1.display();

    return 0;
}