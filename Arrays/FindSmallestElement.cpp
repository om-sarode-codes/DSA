#include<iostream>
using namespace std;
int main(){
    int arr[]={84,58,68,52,47};
    int n=sizeof(arr)/sizeof(int);

    int smallest =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            smallest=arr[i];
        }
    }
    cout<<"smallest number : "<<smallest;
    return 0;
}