#include<iostream>
using namespace std;
int main(){
    int arr[]={84,58,68,52,47};
    int n=sizeof(arr)/sizeof(int);

    int largest =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    cout<<"largest number : "<<largest;
    return 0;
}