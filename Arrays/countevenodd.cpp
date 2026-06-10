#include<iostream>
using namespace std;

int main (){
    int arr[]={55,24,65,46,85};
    int  n=sizeof(arr)/sizeof(int);

    int even=0;
    int odd=0;

    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"Even no : "<<even<<endl;
    cout<<"Odd no : "<<odd<<endl;

}