#include<iostream>
using namespace std;

int main(){
    int arr[]={55,25,65,47,85};
    int  n=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of arrays : "<<sum;

}